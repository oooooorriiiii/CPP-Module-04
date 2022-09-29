//
// Created by yuumo on 2022/08/02.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << BLUE << "Default constructor is called in WrongCat" << RESET
            << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat) {
  std::cout << BLUE << "Copy constructor is called in WrongCat" << RESET
            << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << BLUE << "Destructor is called in WrongCat" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &dog) {
  std::cout << "Assignation operator is called in WrongCat" << std::endl;
  _type = dog._type;
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "GRAAAAAAAAAAAAAAAA (A wrong cat meowed)" << std::endl;
}
