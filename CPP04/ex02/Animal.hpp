//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <iostream>

class Animal {
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal &animal);
	Animal& operator=(const Animal& animal);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	const std::string& getType() const;

protected:
	std::string _type;
};


#endif //EX00_ANIMAL_HPP
