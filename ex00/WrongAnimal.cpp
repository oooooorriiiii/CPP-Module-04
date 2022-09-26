//
// Created by yuumo on 2022/08/02.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("no type") {
  std::cout << CYAN << "Default constructor is called in WrongAnimal" << RESET
            << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
  std::cout << CYAN << "Constructor is called in WrongAnimal" << RESET
            << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
    : _type(wrongAnimal._type) {
  *this = wrongAnimal;
  std::cout << CYAN << "Copy constructor is called in WrongAnimal" << RESET
            << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << CYAN << "Destructor is called in WrongAnimal" << RESET
            << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "Wrong Wrong..." << std::endl;
}

const std::string &WrongAnimal::getType() const {
  return _type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
  std::cout << "Assignation operator is called in WrongAnimal" << std::endl;
  _type = wrongAnimal._type;
  return *this;
}
