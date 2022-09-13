#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    ClapTrap    bad("green boffoon");
    ClapTrap    good("Spyderman");
    ScavTrap    middle("optimus");
    FragTrap    last("donatelo");
    last.highFivesGuys();
    middle.guardGate();
    bad.setDamage(9);
    good.setDamage(10);
    bad.attack(good.getName());
    good.takeDamage(bad.getAttackdamage());
    good.beRepaired(1);
    good.attack(bad.getName());
    bad.takeDamage(good.getAttackdamage());
    bad.attack(good.getName());
    middle.attack(bad.getName());
    bad.takeDamage(middle.getAttackdamage());
    bad.setDamage(99);
    bad.attack(middle.getName());
    middle.takeDamage(bad.getAttackdamage());
    middle.attack(bad.getName());
    bad.takeDamage(middle.getAttackdamage());
    good.setDamage(120);
    good.attack(bad.getName());
    good.attack(middle.getName());
    bad.takeDamage(good.getAttackdamage());
    middle.takeDamage(good.getAttackdamage());
    bad.attack(good.getName());
    middle.attack(good.getName());
    return (0);
}