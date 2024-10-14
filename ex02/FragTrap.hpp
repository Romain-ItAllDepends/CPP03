/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:45 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/14 16:14:49 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap: public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap &obj);
	~FragTrap(void);

	void highFivesGuys(void);

	std::string		getName(void) const;
	unsigned int	getHealth(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getAttack(void) const;

	void	setName(std::string name);
	void	setHealth(unsigned int health);
	void	setEnergy(unsigned int energy);
	void	setAttack(unsigned int attack);

	FragTrap &operator=(const FragTrap &);
};

#endif