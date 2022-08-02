//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
	virtual ~Cat();

	virtual void makeSound() const;
};

#endif //EX00_CAT_HPP
