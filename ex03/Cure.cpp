//
// Created by yuumo on 2022/09/26.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const std::string &type) : AMateria(type) {}

Cure::Cure(const Cure &cure) : AMateria(cure) {}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &cure) {
  if (this == &cure) {
    return *this;
  }
  _type = cure.getType();
  return *this;
}

AMateria *Cure::clone() const {
  return new Cure(_type);
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
