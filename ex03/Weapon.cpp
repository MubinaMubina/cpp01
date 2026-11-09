#include "Weapon.hpp"

// FIXED BUG 1: this file had no code, so linking failed. Defined all four members.

// Constructor: sets the member `type` from the argument with an initializer list.
Weapon::Weapon(std::string type) : type(type)
{
}

// Destructor: nothing to free, Weapon owns no dynamic memory.
Weapon::~Weapon(void)
{
}

// getType: returns a const reference to the member (no copy). The function is const
// because it does not modify the weapon.
const std::string& Weapon::getType(void) const
{
    return (this->type);
}

// setType: assigns the new value to the member. Humans hold a reference/pointer to
// this same object, so they see the change on their next attack.
void Weapon::setType(std::string type)
{
    this->type = type;
}
