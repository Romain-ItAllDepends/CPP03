/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:45 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/07 08:26:17 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &obj);
	~ScavTrap(void);

	void attack(const std::string& target);
	void guardGate();

	std::string		getName(void) const;
	unsigned int	getHealth(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getAttack(void) const;

	void	setName(std::string name);
	void	setHealth(unsigned int health);
	void	setEnergy(unsigned int energy);
	void	setAttack(unsigned int attack);

	ScavTrap &operator=(const ScavTrap &);
};

#endif