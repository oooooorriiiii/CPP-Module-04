//
// Created by yuumo on 2022/08/02.
//

#include "AMateria.hpp"

AMateria::AMateria() : _type("no type") {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &aMateria) {
  *this = aMateria;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &aMateria) {
  if (this == &aMateria)
    return *this;
  _type = aMateria.getType();
  return *this;
}

void AMateria::use(ICharacter &target) {
  std::cout << "* shoots an " << _type << " materia at " << target.getName()
            << " *" << std::endl;
}

const std::string &AMateria::getType() const {
  return _type;
}