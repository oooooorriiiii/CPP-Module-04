//
// Created by yuumo on 2022/08/02.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Default constructor is called in WrongCat" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type) {
	std::cout << "Constructor is called in WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &dog) {
	*this = dog;
	std::cout << "Copy constructor is called in WrongCat" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "destructor is called in WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &dog) {
	std::cout << "Assignation operator is called in WrongCat" << std::endl;
	_type = dog._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "I am not cat, I am completely human." << std::endl;
}
