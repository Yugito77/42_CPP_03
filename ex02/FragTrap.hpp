/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:41:50 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/27 17:43:40 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &cpy);
	~FragTrap();
	
	FragTrap&	operator=(FragTrap const &cpy);

    void highFivesGuys(void);
	void attack(const std::string& target);

};

#endif