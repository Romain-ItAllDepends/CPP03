/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:49 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/14 11:10:35 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Loustic");
	ClapTrap	b("Kevin");

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

	while (b.getEnergy())
		b.beRepaired(500);

	std::cout << "\na died, b doesn't have energy" << std::endl << std::endl;

	a.attack("Himself");
	a.beRepaired(500);
	a.takeDamage(500);
	
	b.attack("Loustic");
	b.beRepaired(500);
	b.takeDamage(500);

	return (0);
}