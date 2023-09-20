/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/100/27 00:34:13 by hugoo             #+#    #+#             */
/*   Updated: 2022/100/27 17:28:13 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : s_name("Unkown"), s_hit_point(100), s_Energy_point(100), s_Attack_damage(0)
{
    std::cout<<"ClapTrap : Constructor Called !"<<std::endl;
}

ClapTrap::ClapTrap(std::string name) : s_name(name), s_hit_point(100), s_Energy_point(100), s_Attack_damage(0)
{
    std::cout<<"ClapTrap : String Constructor Called !"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
    std::cout << "ClapTrap : Copy Constructor Called !" << std::endl;
    *this = cpy;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap : Destructor Called !"<<std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &cpy)
{
    if (this == &cpy)
        return *this;
    this->s_name = cpy.s_name;
    this->s_hit_point = cpy.s_hit_point;
    this->s_Energy_point = cpy.s_Energy_point;
    this->s_Attack_damage = cpy.s_Attack_damage;
    return (*this);
}


/*********************************************************************************************************************/

void ClapTrap::attack(const std::string& target)
{
    if(target.empty())
    {
        std::cout<<"Target is missing !"<<std::endl;
        return ;
    }
    else if (s_hit_point <= 0)
		std::cout << s_name << " cannot attack. He is already dead " << std::endl;
    else if (s_Energy_point <= 0)
		std::cout << s_name << " cannot attack. He is out of energy " << std::endl;
    else
    {
        std::cout<<s_name<<" attacks "<<target<<", causing "<<s_Attack_damage<<" points of damage!"<<std::endl;
        s_Energy_point -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > 100)
	{
		std::cout << "No negative number allowed and the maximum amount of damage possible is " << 100 << std::endl;
		return ;
	}
	if (s_hit_point <= 0)
	{
		std::cout << s_name << " is already dead " << std::endl;
		return ;
	}
    s_hit_point -= amount;
    std::cout << s_name << " takes " << amount << " point(s) of damage.";
    if (s_hit_point <= 0)
    	std::cout<< s_name << " is now dead " << std::endl;
    else
	{
		if (s_hit_point >= 100)
			s_hit_point = 100;
		std::cout << " Life points = " << s_hit_point << std::endl;
	}
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount >= 100)
	{
		std::cout << "No negative number allowed and the maximum amount of repirs possible is " << 100 << std::endl;
		return ;
	}
    if (s_hit_point <= 0)
		std::cout << s_name << " is already dead" << std::endl;
    else if (s_Energy_point <= 0)
		std::cout << s_name << " is too weak to heal" << std::endl;
    else if (s_hit_point >= 100)
		std::cout <<	s_name << " has already full point: 100" << std::endl;
	else if (s_Energy_point && s_hit_point && s_hit_point < 100
		&& (amount > 0 && amount <= 100))
    {
        this->s_Energy_point -= 1;
 		std::cout << s_name << " earned " << amount << " points of energy" << std::endl;
        this->s_hit_point += amount;
    }
    if (s_hit_point >= 100)
		s_hit_point = 100;
    return ;
}

std::string	ClapTrap::getName(void) const
{
	return (s_name);
}
int	ClapTrap::getHit(void) const
{
	return (s_hit_point);
}
int	ClapTrap::getEnergy(void) const
{
	return (s_Energy_point);
}
int	ClapTrap::getAttack(void) const
{
	return (s_Attack_damage);
}
