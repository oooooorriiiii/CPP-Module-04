//
// Created by yuumo on 2022/09/24.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const std::string &type) : AMateria(type) {}

Ice::Ice(const Ice &ice) : AMateria(ice) {}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &ice) {
  if (this == &ice)
    return *this;
  _type = ice.getType();
  return *this;
}

AMateria *Ice::clone() const {
  return new Ice(_type);
}

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}
