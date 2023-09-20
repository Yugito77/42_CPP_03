/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:41:43 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/27 17:51:41 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout<<"FragTrap : Constructor Called !"<<std::endl;
	s_hit_point = 100;
	s_Energy_point = 50;
	s_Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"FragTrap : String Constructor Called !"<<std::endl;
	s_hit_point = 100;
	s_Energy_point = 50;
	s_Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &cpy)
{
    std::cout << "FragTrap : Copy Constructor Called !" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap : Destructor Called !"<<std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &cpy)
{
	if (this == &cpy)
		return (*this);
	s_name = cpy.s_name;
    s_hit_point = cpy.s_hit_point;
    s_Energy_point = cpy.s_Energy_point;
    s_Attack_damage = cpy.s_Attack_damage;
    return (*this);
}

/***************************************************************************************************/

void	FragTrap::highFivesGuys()
{
	std::cout << "Give me a highfive !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(target.empty())
    {
        std::cout<<"Target is missing !"<<std::endl;
        return ;
    }
    else if (s_hit_point <= 0)
		std::cout << "FragTrap " << s_name << " cannot attack. He is already dead " << std::endl;
    else if (s_Energy_point <= 0)
		std::cout << "FragTrap " << s_name << " cannot attack. He is out of energy " << std::endl;
    else
    {
        std::cout<<"FragTrap "<<s_name<<" attacks "<<target<<", causing "<<s_Attack_damage<<" points of damage!"<<std::endl;
        s_Energy_point -= 1;
    }
}