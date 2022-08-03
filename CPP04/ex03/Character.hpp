//
// Created by yuumo on 2022/08/02.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	Character();
	Character(const std::string& name);
	Character(const Character& character);
	Character& operator=(const Character& character);
	virtual ~Character();

	virtual const std::string& getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	const std::string	_name;
	AMateria			*_materias[4];
};


#endif //EX03_CHARACTER_HPP
