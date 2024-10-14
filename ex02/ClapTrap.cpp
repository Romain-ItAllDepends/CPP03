/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:43 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/14 16:14:00 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("Random"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << _name << " ClapTrap has been created." << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << _name << " ClapTrap has been created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj) {
	std::cout << _name << " ClapTrap has been created with copy constructor." << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(void) {
	std::cout << _name << " ClapTrap BOUM! " << _name << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return (_name);
}

unsigned int	ClapTrap::getHealth(void) const {
	return (_hitPoints);
}

unsigned int	ClapTrap::getEnergy(void) const {
	return (_energyPoints);
}

unsigned int	ClapTrap::getAttack(void) const {
	return (_attackDamage);
}

void	ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setHealth(unsigned int health) {
	_hitPoints = health;
}

void	ClapTrap::setEnergy(unsigned int energy) {
	_energyPoints = energy;
}

void	ClapTrap::setAttack(unsigned int attack) {
	_attackDamage = attack;
}

void	ClapTrap::attack(const std::string& target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " has no energy points or dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " has " << _hitPoints << "." <<std::endl;
	if (_hitPoints == 0)
		std::cout << _name << " took no damage because health is empty." << std::endl;
	else if (_hitPoints > 0)
	{
		if (_hitPoints < amount)
			_hitPoints = 0;
		else
			_hitPoints -= amount;
		std::cout << _name << " has been attacked: " << _hitPoints << "." <<std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _name << " has " << _hitPoints << "." <<std::endl;
	if (_energyPoints == 0)
		std::cout << _name << " has no energy points." << std::endl;
	else if (_hitPoints == 0)
		std::cout << _name << " can't be repaired because " << _name << " is broken." << std::endl;
	else if (_energyPoints > 0)
	{
		_hitPoints += amount;
		std::cout << _name << " has been heal: " << _hitPoints << "." <<std::endl;
		_energyPoints--;
		std::cout << _name << " has " << _energyPoints << " energy." << std::endl;
	}
	else if (_energyPoints == 0)
		std::cout << _name << " doesn't have any energy." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& a) {
	std::cout << "Copy assignment operator of ClapTrap called" << std::endl;
	if (this != &a)
	{
		_name = a.getName();
		_hitPoints = a.getHealth();
		_energyPoints = a.getEnergy();
		_attackDamage = a.getAttack();
	}
	return (*this);
}
