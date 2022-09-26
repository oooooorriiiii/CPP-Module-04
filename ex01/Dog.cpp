//
// Created by yuumo on 2022/08/02.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default constructor is called in Dog" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type) {
	std::cout << "Constructor is called in Dog" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	*this = dog;
	std::cout << "Copy constructor is called in Dog" << std::endl;
}

Dog::~Dog() {
	std::cout << "Destructor is called in Dog" << std::endl;
}

Dog& Dog::operator=(const Dog &dog) {
	std::cout << "Assignation operator is called in Dog" << std::endl;
	_type = dog._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WAN!" << std::endl;
}
