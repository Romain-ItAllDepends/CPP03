/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:43 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/14 16:13:50 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " has been created with ScavTrap standart constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
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
	return (_hitPoints);
}

unsigned int	ScavTrap::getEnergy(void) const {
	return (_energyPoints);
}

unsigned int	ScavTrap::getAttack(void) const {
	return (_attackDamage);
}

void	ScavTrap::setName(std::string name) {
	_name = name;
}

void	ScavTrap::setHealth(unsigned int health) {
	_hitPoints = health;
}

void	ScavTrap::setEnergy(unsigned int energy) {
	_energyPoints = energy;
}

void	ScavTrap::setAttack(unsigned int attack) {
	_attackDamage = attack;
}

void ScavTrap::guardGate() {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " has no energy points or dead, can't guard." << std::endl;
		return ;
	}
	std::cout << _name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " has no energy points or dead, can't attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& a) {
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
