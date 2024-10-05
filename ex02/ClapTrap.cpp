/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:43 by rgobet            #+#    #+#             */
/*   Updated: 2024/09/24 14:03:39 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("Random"), _health(0), _energy(0), _attack(0) {
	std::cout << _name << " has been created with ClapTrap standart constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _health(10), _energy(10), _attack(0) {
	std::cout << _name << " ClapTrap has been created." << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "BOUM! The ClapTrap " << _name << " to explode." << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return (_name);
}

unsigned int	ClapTrap::getHealth(void) const {
	return (_health);
}

unsigned int	ClapTrap::getEnergy(void) const {
	return (_energy);
}

unsigned int	ClapTrap::getAttack(void) const {
	return (_attack);
}

void	ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setHealth(unsigned int health) {
	_health = health;
}

void	ClapTrap::setEnergy(unsigned int energy) {
	_energy = energy;
}

void	ClapTrap::setAttack(unsigned int attack) {
	_attack = attack;
}

void	ClapTrap::attack(const std::string& target) {
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attack << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " has " << _health << "." <<std::endl;
	if (_health == 0)
	{
		std::cout << _name << " took no damage because health is empty." << std::endl;
		_energy--;
		std::cout << _name << " has " << _energy << " energy." << std::endl;
	}
	else if (_energy > 0)
	{
		if (_health < amount)
			_health = 0;
		else
			_health -= amount;
		std::cout << _name << " has been attacked: " << _health << "." <<std::endl;
		_energy--;
		std::cout << _name << " has " << _energy << " energy." << std::endl;
	}
	else if (_energy == 0)
		std::cout << _name << " doesn't have enought energy." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _name << " has " << _health << "." <<std::endl;
	if (_health == 0)
		std::cout << _name << " can't be repaired because " << _name << " is broken." << std::endl;
	else if (_energy > 0)
	{
		if (_health + amount > 100)
			_health = 100;
		else
			_health += amount;
		std::cout << _name << " has been heal: " << _health << "." <<std::endl;
		_energy--;
		std::cout << _name << " has " << _energy << " energy." << std::endl;
	}
	else if (_energy == 0)
		std::cout << _name << " doesn't have any energy." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& a) {
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
