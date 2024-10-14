/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:43 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/14 16:16:01 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " has been created with FragTrap standart constructor." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " FragTrap has been created." << std::endl;
}

FragTrap::FragTrap(FragTrap &obj) {
	std::cout << _name << " FragTrap has been created with copy constructor." << std::endl;
	*this = obj;
}

FragTrap::~FragTrap(void) {
	std::cout << "BOUM! The FragTrap " << _name << " to explode." << std::endl;
}

std::string	FragTrap::getName(void) const {
	return (_name);
}

unsigned int	FragTrap::getHealth(void) const {
	return (_hitPoints);
}

unsigned int	FragTrap::getEnergy(void) const {
	return (_energyPoints);
}

unsigned int	FragTrap::getAttack(void) const {
	return (_attackDamage);
}

void	FragTrap::setName(std::string name) {
	_name = name;
}

void	FragTrap::setHealth(unsigned int health) {
	_hitPoints = health;
}

void	FragTrap::setEnergy(unsigned int energy) {
	_energyPoints = energy;
}

void	FragTrap::setAttack(unsigned int attack) {
	_attackDamage = attack;
}

void FragTrap::highFivesGuys(void) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "FragTrap " << _name << " has no energy points or dead, can't high five." << std::endl;
		return ;
	}
	std::cout << _name << " give an high five!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& a) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		_name = a.getName();
		_hitPoints = a.getHealth();
		_energyPoints = a.getEnergy();
		_attackDamage = a.getAttack();
	}
	return (*this);
}
