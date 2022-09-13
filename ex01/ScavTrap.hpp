#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

    ScavTrap(void);
    ScavTrap(std::string const & name);
    ScavTrap(ScavTrap const &);
    ~ScavTrap(void);
    ScavTrap& operator=(ScavTrap const &);
    
    void guardGate();

private:

    std::string const	_name;
    int					_HitPoints;
	int					_EnergyPoints;
	int 				_AttackDamage;    
};