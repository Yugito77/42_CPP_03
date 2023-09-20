/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:18:25 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/27 16:56:24 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &cpy);
	~ScavTrap();
	
	ScavTrap&	operator=(ScavTrap const &cpy);

	void	guardGate();
	void attack(const std::string& target);

};

#endif