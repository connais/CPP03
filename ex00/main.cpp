#include "ClapTrap.hpp"

int main()
{
    ClapTrap    bad("green boffoon");
    ClapTrap    good("Spyderman");

    bad.setDamage(9);
    good.setDamage(10);
    bad.attack(good.getName());
    good.takeDamage(bad.getAttackdamage());
    good.beRepaired(1);
    good.attack(bad.getName());
    bad.takeDamage(good.getAttackdamage());
    bad.attack(good.getName());
    return (0);
}