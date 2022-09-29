//
// Created by yuumo on 2022/08/02.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << BLUE << "Default constructor is called in Cat" << RESET
            << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
  std::cout << BLUE << "Copy constructor is called in Cat" << RESET
            << std::endl;
}

Cat::~Cat() {
  std::cout << BLUE << "Eestructor is called in Cat" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
  std::cout << "Assignation operator is called in Cat" << std::endl;
  _type = cat._type;
  return *this;
}

void Cat::makeSound() const {
  std::cout << "NYAN" << std::endl;
}
