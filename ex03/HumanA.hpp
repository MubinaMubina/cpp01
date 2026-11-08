#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		// TODO: weapon member — reference or pointer? (HumanA is always armed)

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void	attack(void) const;
};

#endif
