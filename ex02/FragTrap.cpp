#include "FragTrap.hpp"
FragTrap::FragTrap(void)
{
    return ;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name)
{
	setName(name);
	setHitPoints();
	setEnergyPoints();
	setDamage(20);
    std::cout << "constructor junior junior called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & perso)
{
	std::cout << "copy junior junior constructor called" << std::endl;
	*this = perso;
	return ;
}	

FragTrap::~FragTrap(void)
{
	std::cout << "destructor junior junior called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & perso)
{
	if (this == &perso)
		return (*this);
	this->_HitPoints = perso._HitPoints;
	this->_EnergyPoints = perso._EnergyPoints;
	this->_AttackDamage = perso._AttackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::string five = "";
    std::cout << "GIVE ME FIVE !?!?!?!?!" << std::endl;
    while (five != "FIVE")
    {
        std::cin >> five;
        if (five != "FIVE")
            std::cout << "GIVE ME FIVE !?!?!?!?!" << std::endl;
    }
}