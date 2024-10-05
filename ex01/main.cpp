/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:49 by rgobet            #+#    #+#             */
/*   Updated: 2024/09/24 14:15:41 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a("Loustic");
	ClapTrap	b("Kevin");
	ScavTrap	c("Jaki");

	a.setHealth(100);
	b.setHealth(100);
	a.attack("Jean jacques");
	b.attack("Jakeline");
	a.takeDamage(20);
	b.takeDamage(25);
	a.beRepaired(10);
	b.beRepaired(5);
	a.takeDamage(90);
	b.takeDamage(50);
	a.beRepaired(1000);
	b.beRepaired(500);

	std::cout << "_________________\n" << std::endl;

	c.setEnergy(1);
	c.takeDamage(110);
	c.beRepaired(55);
	c.beRepaired(55);
	c.guardGate();
	return (0);
}