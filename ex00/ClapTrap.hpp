#pragma once
#include <iostream>
#include <string>


class ClapTrap
{

public:
	ClapTrap(std::string const & name);
    ClapTrap(ClapTrap const &);
    ~ClapTrap(void);
    ClapTrap& operator=(ClapTrap const &);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setDamage(unsigned int amount);
	int getAttackdamage(void);
	const std::string getName(void);
private:

    std::string const	_name;
    int					_HitPoints;
	int					_EnergyPoints;
	int 				_AttackDamage;

};