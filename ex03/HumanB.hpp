#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		// TODO: weapon member — reference or pointer? (HumanB may have no weapon)

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon& weapon);
		void	attack(void) const;
};

#endif
