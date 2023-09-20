/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:34:04 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/27 14:40:26 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << " *** Simple attacks *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Simple attacks : Target unkown *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.attack("");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Multiply attacks till no points left *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		int N(11);
		while (N--)
			hulk.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.takeDamage(5);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages neg num *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.takeDamage(-1);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages big num *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.takeDamage(4294967294);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages till death *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		for (int i = 0; i < 3; i++)
		{
			hulk.takeDamage(5);
			if (hulk.getHit() <= 0)
				break ;
		}
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages + Try to repair while being dead *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.takeDamage(10);
		hulk.beRepaired(5);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages + Try to attack while being dead *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.takeDamage(10);
		hulk.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Repair when already has full points *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		hulk.beRepaired(9);
	}
		{
		std::cout << std::endl;
		std::cout << " *** Repair when no energy points left *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		int N = 10;
		while (N--)
			hulk.attack("John");
		hulk.beRepaired(6);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Attack with a ClapTrap copy *** " << \
		std::endl;
		ClapTrap	hulk("Hulk");
		ClapTrap	henry(hulk);
		henry.takeDamage(10);
		henry.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Taking damage then repairing fully *** " << std::endl;
		ClapTrap	hulk("Hulk");
		std::cout << "Current hit points: " << hulk.getHit() << std::endl;
		hulk.takeDamage(5);
		std::cout << "Current hit points: " << hulk.getHit() << std::endl;
		hulk.beRepaired(5);
		std::cout << "Current hit points: " << hulk.getHit() << std::endl;
	}
	
	return (0);
}