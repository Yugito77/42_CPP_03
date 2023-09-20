/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:34:23 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/27 14:39:28 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &cpy);
	ClapTrap & operator=(ClapTrap const &cpy);
	~ClapTrap();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string	getName(void) const;
	int			getHit(void) const;
	int			getEnergy(void) const;
	int			getAttack(void) const;
	
private:
	
	std::string	s_name;
	int			s_hit_point;
	int			s_Energy_point;
	int			s_Attack_damage;
	
};

#endif