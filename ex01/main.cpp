#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
        /*
        ClapTrap obj("Morda");
        ClapTrap newObj;

        newObj = obj;

        std::cout << "obj: " << obj.getName() << " " << obj.getHitPoints() << " ";
        std::cout << obj.getEnergyPoints() << " " << obj.getAttackDamage() << std::endl;

        std::cout << "newObj: " << newObj.getName() << " " << newObj.getHitPoints() << " ";
        std::cout << newObj.getEnergyPoints() << " " << newObj.getAttackDamage() << std::endl;

        newObj.setName("Bogdan");
        ClapTrap newerObj("Marian");

        std::cout << "newObj: " << newObj.getName() << " " << newObj.getHitPoints() << " ";
        std::cout << newObj.getEnergyPoints() << " " << newObj.getAttackDamage() << std::endl;

        std::cout << "newerObj: " << newerObj.getName() << " " << newerObj.getHitPoints() << " ";
        std::cout << newerObj.getEnergyPoints() << " " << newerObj.getAttackDamage() << std::endl;
        
        obj.attack("Bogdan");
        newObj.takeDamage(6);
        newObj.beRepaired(2);
        newerObj.attack("Bogdan");
        newObj.takeDamage(6);
        newObj.beRepaired(2);
*/

        ScavTrap obj2("ST.Morda");
        ScavTrap newObj2;

        newObj2 = obj2;

        std::cout << "obj2: " << obj2.getName() << " " << obj2.getHitPoints() << " ";
        std::cout << obj2.getEnergyPoints() << " " << obj2.getAttackDamage() << std::endl;

        std::cout << "newObj2: " << newObj2.getName() << " " << newObj2.getHitPoints() << " ";
        std::cout << newObj2.getEnergyPoints() << " " << newObj2.getAttackDamage() << std::endl;

        newObj2.setName("ST.Bogdan");
        ScavTrap newerObj2("ST.Marian");
        ScavTrap newestObj2(newerObj2);

        std::cout << "newObj2: " << newObj2.getName() << " " << newObj2.getHitPoints() << " ";
        std::cout << newObj2.getEnergyPoints() << " " << newObj2.getAttackDamage() << std::endl;

        std::cout << "newerObj2: " << newerObj2.getName() << " " << newerObj2.getHitPoints() << " ";
        std::cout << newerObj2.getEnergyPoints() << " " << newerObj2.getAttackDamage() << std::endl;

        std::cout << "newestObj2: " << newestObj2.getName() << " " << newestObj2.getHitPoints() << " ";
        std::cout << newestObj2.getEnergyPoints() << " " << newestObj2.getAttackDamage() << std::endl;

        obj2.attack("ST.Bogdan");
        newObj2.takeDamage(6);
        newObj2.beRepaired(2);
        newerObj2.attack("ST.Bogdan");
        newObj2.takeDamage(6);
        newObj2.beRepaired(2);

        newerObj2.guardGate();

        return (0);
}
