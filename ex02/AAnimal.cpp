//
// Created by yuumo on 2022/08/02.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() {
  std::cout << CYAN << "Default constructor is called in AAnimal" << RESET << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type) {
  std::cout << CYAN << "Constructor is called in AAnimal" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) {
  *this = animal;
  std::cout << CYAN << "Copy constructor is called in AAnimal" << RESET << std::endl;
}

AAnimal::~AAnimal() {
  std::cout << CYAN << "Destructor is called in AAnimal" << RESET << std::endl;
}

const std::string& AAnimal::getType() const {
  return _type;
}

AAnimal& AAnimal::operator=(const AAnimal &animal) {
  std::cout << CYAN << "Assignation operator is called in AAnimal" << RESET << std::endl;
  _type = animal._type;
  return *this;
}
