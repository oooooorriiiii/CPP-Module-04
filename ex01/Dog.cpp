//
// Created by yuumo on 2022/08/02.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << BLUE << "Default constructor is called in Dog" << RESET << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type) {
	std::cout << BLUE << "Constructor is called in Dog" << RESET << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	*this = dog;
	std::cout << BLUE << "Copy constructor is called in Dog" << RESET << std::endl;
}

Dog::~Dog() {
	std::cout << BLUE << "Destructor is called in Dog" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog &dog) {
	std::cout << "Assignation operator is called in Dog" << std::endl;
	_type = dog._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WAN!" << std::endl;
}
