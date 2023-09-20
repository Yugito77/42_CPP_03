/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:18:11 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/27 17:35:49 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout<<"ScavTrap : Constructor Called !"<<std::endl;
	s_hit_point = 100;
	s_Energy_point = 50;
	s_Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"ScavTrap : String Constructor Called !"<<std::endl;
	s_hit_point = 100;
	s_Energy_point = 50;
	s_Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
    std::cout << "ScavTrap : Copy Constructor Called !" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap : Destructor Called !"<<std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &cpy)
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

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << s_name << " has entered Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(target.empty())
    {
        std::cout<<"Target is missing !"<<std::endl;
        return ;
    }
    else if (s_hit_point <= 0)
		std::cout << "ScavTrap " << s_name << " cannot attack. He is already dead " << std::endl;
    else if (s_Energy_point <= 0)
		std::cout << "ScavTrap " << s_name << " cannot attack. He is out of energy " << std::endl;
    else
    {
        std::cout<<"ScavTrap "<<s_name<<" attacks "<<target<<", causing "<<s_Attack_damage<<" points of damage!"<<std::endl;
        s_Energy_point -= 1;
    }
}