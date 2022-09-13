#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    return ;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name)
{
	setName(name);
	setHitPoints();
	setEnergyPoints();
	setDamage(20);
    std::cout << "constructor junior called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & perso)
{
	std::cout << "copy junior constructor called" << std::endl;
	*this = perso;
	return ;
}	

ScavTrap::~ScavTrap(void)
{
	std::cout << "destructor junior called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & perso)
{
	if (this == &perso)
		return (*this);
	this->_HitPoints = perso._HitPoints;
	this->_EnergyPoints = perso._EnergyPoints;
	this->_AttackDamage = perso._AttackDamage;
	return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " came into gate guardian mode" << std::endl;
}