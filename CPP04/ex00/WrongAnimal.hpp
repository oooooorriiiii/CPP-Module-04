//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& wrongAnimal);
	WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
	virtual ~WrongAnimal();

	virtual void makeSound() const;
	const std::string& getType() const;

protected:
	std::string _type;

};


#endif //EX00_WRONGANIMAL_HPP
