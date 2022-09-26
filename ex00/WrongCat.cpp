//
// Created by yuumo on 2022/08/02.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << BLUE << "Default constructor is called in WrongCat" << RESET
            << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type) {
  std::cout << BLUE << "Constructor is called in WrongCat" << RESET
            << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat) {
  *this = cat;
  std::cout << BLUE << "Copy constructor is called in WrongCat" << RESET
            << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << BLUE << "destructor is called in WrongCat" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &dog) {
  std::cout << "Assignation operator is called in WrongCat" << std::endl;
  _type = dog._type;
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "I am not cat, I am completely human." << std::endl;
}
