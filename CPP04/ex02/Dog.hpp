//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const std::string& type);
	Dog(const Dog& dog);
	Dog& operator=(const Dog& dog);
	virtual ~Dog();

	virtual void makeSound() const;
};


#endif //EX00_DOG_HPP
