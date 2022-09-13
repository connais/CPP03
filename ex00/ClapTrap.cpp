#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const & name) : _name(name), 
_HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "og constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & perso)
{
	std::cout << "copy constructor called" << std::endl;
	*this = perso;
	return ;
}	

ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & perso)
{
	if (this == &perso)
		return (*this);
	this->_HitPoints = perso._HitPoints;
	this->_EnergyPoints = perso._EnergyPoints;
	this->_AttackDamage = perso._AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " 
		<< target << ", causing " << _AttackDamage 
		<< " points of damage!" << std::endl;
		_EnergyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= amount;
	if (_HitPoints <= 0)
		std::cout << _name << " is dead " << std::endl;
	return ;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		_HitPoints += amount;
		_EnergyPoints--;
		std::cout << _name << " repairs himself, have " 
		<< _HitPoints << "  hit points and he has only " 
		<< _EnergyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << _name << " can't repairs himself" << std::endl;
}

void ClapTrap::setDamage(unsigned int amount)
{
	this->_AttackDamage = amount;
	return ;
}

int ClapTrap::getAttackdamage(void)
{
	return (_AttackDamage);
}
	
const std::string ClapTrap::getName(void)
{
	return (_name);
}

