/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:34:04 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/27 16:52:45 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{

	{
		std::cout << std::endl;
		std::cout << " *** Simple attacks *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		hulk.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Simple attacks : Target unkown *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		hulk.attack("");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Multiply attacks till no points left *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		int N(60);
		while (N--)
			hulk.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		hulk.takeDamage(60);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages negative number *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		hulk.takeDamage(-60);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages till death *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		for (int i = 0; i < 3; i++)
		{
			hulk.takeDamage(40);
			if (hulk.getHit() <= 0)
				break ;
		}
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages + Try to repair while being dead *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		hulk.takeDamage(100);
		hulk.beRepaired(5);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Take dammages + Try to attack while being dead *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		hulk.takeDamage(100);
		hulk.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Repair when already has full points *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		hulk.beRepaired(10);
	}
		{
		std::cout << std::endl;
		std::cout << " *** Repair when no energy points left *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		int N = 51;
		while (N--)
			hulk.attack("John");
		hulk.beRepaired(1);
	}
	{
		std::cout << std::endl;
		std::cout << " *** Attack with a ScavTrap copy *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		ScavTrap	henry(hulk);
		henry.takeDamage(10);
		henry.attack("John");
	}
	{
		std::cout << std::endl;
		std::cout << " *** Guard Gates *** " << \
		std::endl;
		ScavTrap	hulk("Hulk");
		ScavTrap	henry(hulk);
		hulk.guardGate();
		henry.guardGate();
	}
	{
		std::cout << std::endl;
		std::cout << " *** Taking damage then repairing fully *** " << std::endl;
		ScavTrap	hulk("Hulk");
		std::cout << "Current hit points: " << hulk.getHit() << std::endl;
		hulk.takeDamage(5);
		std::cout << "Current hit points: " << hulk.getHit() << std::endl;
		hulk.beRepaired(5);
		std::cout << "Current hit points: " << hulk.getHit() << std::endl;
	}
	return (0);
}