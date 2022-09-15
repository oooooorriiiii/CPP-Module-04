//
// Created by yuumo on 2022/08/02.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default constructor is called in WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
	std::cout << "Constructor is called in WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	*this = wrongAnimal;
	std::cout << "Copy constructor is called in WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "destructor is called in WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "I am wrong animal." << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return _type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	std::cout << "Assignation operator is called in WrongAnimal" << std::endl;
	_type = wrongAnimal._type;
	return *this;
}
