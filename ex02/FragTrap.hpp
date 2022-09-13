#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

    FragTrap(void);
    FragTrap(std::string const & name);
    FragTrap(FragTrap const &);
    ~FragTrap(void);
    FragTrap& operator=(FragTrap const &);
    
    void highFivesGuys(void);

private:

    std::string const	_name;
    int					_HitPoints;
	int					_EnergyPoints;
	int 				_AttackDamage;    
};