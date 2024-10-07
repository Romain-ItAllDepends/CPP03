/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:43 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/07 08:38:42 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	_health = 0;
	_energy = 0;
	_attack = 0;
	std::cout << _name << " has been created with ScavTrap standart constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << _name << " ScavTrap has been created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) {
	std::cout << _name << " ScavTrap has been created with copy constructor." << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "BOUM! The ScavTrap " << _name << " to explode." << std::endl;
}

std::string	ScavTrap::getName(void) const {
	return (_name);
}

unsigned int	ScavTrap::getHealth(void) const {
	return (_health);
}

unsigned int	ScavTrap::getEnergy(void) const {
	return (_energy);
}

unsigned int	ScavTrap::getAttack(void) const {
	return (_attack);
}

void	ScavTrap::setName(std::string name) {
	_name = name;
}

void	ScavTrap::setHealth(unsigned int health) {
	_health = health;
}

void	ScavTrap::setEnergy(unsigned int energy) {
	_energy = energy;
}

void	ScavTrap::setAttack(unsigned int attack) {
	_attack = attack;
}

void ScavTrap::guardGate() {
	std::cout << _name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
		std::cout << "ScavTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attack << " points of damage!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& a) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		_name = a.getName();
		_name = a.getHealth();
		_name = a.getEnergy();
		_name = a.getAttack();
	}
	return (*this);
}
