#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
        //std::string     _name;
        //unsigned int    _hitPoints;
        //int             _energyPoints;
        //int             _attackDamage;

        public:

        ScavTrap(void);
        ScavTrap(std:: string name);
        ScavTrap(ScavTrap const & cpy);
        ScavTrap&       operator=(ScavTrap const & src);
        ~ScavTrap(void);

        void            attack(const std::string& target);
        void            guardGate(void);


};


#endif
