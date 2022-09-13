#pragma once
#include <iostream>
#include <string>


class ClapTrap
{

public:
	ClapTrap(void);
	ClapTrap(std::string const & name);
    ClapTrap(ClapTrap const &);
    ~ClapTrap(void);
    ClapTrap& operator=(ClapTrap const &);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setDamage(unsigned int amount);
	void setName(std::string const name);
	void setHitPoints(void);
	void setEnergyPoints(void);
	int getAttackdamage(void);
	int getHitpoints(void);
	const std::string getName(void);


private:

    std::string			_name;
    int					_HitPoints;
	int					_EnergyPoints;
	int 				_AttackDamage;

};