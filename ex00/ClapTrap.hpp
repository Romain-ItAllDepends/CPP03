/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:45 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/07 08:23:07 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap {
private:
	std::string		_name;
	unsigned int	_health;
	unsigned int	_energy;
	unsigned int	_attack;
public:
	ClapTrap(void);
	ClapTrap(ClapTrap &obj);
	ClapTrap(std::string name);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string		getName(void) const;
	unsigned int	getHealth(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getAttack(void) const;

	void	setName(std::string name);
	void	setHealth(unsigned int health);
	void	setEnergy(unsigned int energy);
	void	setAttack(unsigned int attack);

	ClapTrap &operator=(const ClapTrap &);
};

#endif