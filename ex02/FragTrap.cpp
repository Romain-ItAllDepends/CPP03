/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:43 by rgobet            #+#    #+#             */
/*   Updated: 2024/10/07 08:38:35 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	_health = 0;
	_energy = 0;
	_attack = 0;
	std::cout << _name << " has been created with FragTrap standart constructor." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_health = 100;
	_energy = 100;
	_attack = 30;
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
	return (_health);
}

unsigned int	FragTrap::getEnergy(void) const {
	return (_energy);
}

unsigned int	FragTrap::getAttack(void) const {
	return (_attack);
}

void	FragTrap::setName(std::string name) {
	_name = name;
}

void	FragTrap::setHealth(unsigned int health) {
	_health = health;
}

void	FragTrap::setEnergy(unsigned int energy) {
	_energy = energy;
}

void	FragTrap::setAttack(unsigned int attack) {
	_attack = attack;
}

void FragTrap::highFivesGuys(void) {
	std::cout << _name << "give an high five!" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
		std::cout << "FragTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attack << " points of damage!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& a) {
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
