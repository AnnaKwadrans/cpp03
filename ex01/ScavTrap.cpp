#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
        std::cout << "ScavTrap: Default constructor called" << std::endl;
        setHitPoints(100);
        setEnergyPoints(50);
        setAttackDamage(50);
        return ;
}

ScavTrap::ScavTrap(std:: string name) : ClapTrap(name)
{
        std::cout << "ScavTrap: Parametrized constructor called" << std::endl;
        //setName(name);
        setHitPoints(100);
        setEnergyPoints(50);
        setAttackDamage(50);
        return ;
}

ScavTrap::ScavTrap(ScavTrap const & cpy) : ClapTrap(cpy)
{
        std::cout << "ScavTrap: Copy constructor called" << std::endl;
        *this = cpy;
        //setName(cpy.getName());
        //setHitPoints(cpy.getHitPoints());
        //setEnergyPoints(cpy.getEnergyPoints());
        //setAttackDamage(cpy.getAttackDamage());
        return ;
}

ScavTrap&       ScavTrap::operator=(ScavTrap const & src) // es necesario?
{
        std::cout << "ScavTrap: Copy assign operator called" << std::endl;
        if (this != &src)
        {
                ClapTrap::operator=(src);
                /*
                std::cout << src.getName() << std::endl;
                this->_name = src.getName();
                std::cout << _name << std::endl;
                std::cout << src.getHitPoints() << std::endl;
                this->_hitPoints = src.getHitPoints();
                std::cout << src.getEnergyPoints() << std::endl;
                _energyPoints = src.getEnergyPoints();
                std::cout << src.getAttackDamage() << std::endl;
                _attackDamage = src.getAttackDamage();
                */
        }
        return (*this);
}

ScavTrap::~ScavTrap(void)
{
        std::cout << "ScavTrap: Destructor called" << std::endl;
        return ;
}

void            ScavTrap::attack(const std::string& target)
{
        std::cout << "ScavTrap: " << this->getName() << " attacks " << target << ". ";
        std::cout << target << " looses hit points." << std::endl;
        return ;
}

void            ScavTrap::guardGate(void)
{
        std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode.";
        std::cout << std::endl;
        return ;
}
