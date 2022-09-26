//
// Created by yuumo on 2022/08/02.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << CYAN << "Default constructor is called in Animal" << RESET << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
	std::cout << CYAN << "Constructor is called in Animal" << RESET << std::endl;
}

Animal::Animal(const Animal &animal) {
	*this = animal;
	std::cout << CYAN << "Copy constructor is called in Animal" << RESET << std::endl;
}

Animal::~Animal() {
	std::cout << CYAN << "Destructor is called in Animal" << RESET << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal Animal..." << std::endl;
}

const std::string& Animal::getType() const {
	return _type;
}

Animal& Animal::operator=(const Animal &animal) {
	std::cout << "Assignation operator is called in Animal" << std::endl;
	_type = animal._type;
	return *this;
}
