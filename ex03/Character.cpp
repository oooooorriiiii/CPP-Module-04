//
// Created by yuumo on 2022/08/02.
//

#include "Character.hpp"

Character::Character() : _name("no name") {
//  std::cout << "Default constructor is called in Character" << std::endl;
  for (int i = 0; i < 4; i++) {
    _materias[i] = NULL;
  }
}

Character::Character(const std::string &name) : _name(name) {
//  std::cout << "Constructor is called in Character" << std::endl;
  for (int i = 0; i < 4; i++) {
    _materias[i] = NULL;
  }
}

Character::Character(const Character &character) {
//  std::cout << "Copy constructor is called in Character" << std::endl;
  *this = character;
}

Character &Character::operator=(const Character &character) {
  (std::string) _name = character.getName();
  for (int i = 0; i < 4; i++) {
    if (_materias[i]) {
      delete _materias[i];
    }
    if (character._materias[i]) {
      _materias[i] = character._materias[i]->clone();
    }
  }
  return *this;
}

Character::~Character() {
//  std::cout << "Destructor is called in Character" << std::endl;
  for (int i = 0; i < 4; i++) {
    if (_materias[i]) {
      delete _materias[i];
    }
  }
}

const std::string &Character::getName() const {
  return _name;
}

void Character::use(int idx, ICharacter &target) {
  if ((0 <= idx && idx < 4) && _materias[idx])
    _materias[idx]->use(target);
}
void Character::equip(AMateria *m) {
  for (size_t i = 0; i < 4; i++) {
    if (!_materias[i]) {
      _materias[i] = m;
      return;
    }
  }
}
void Character::unequip(int idx) {
  if ((0 <= idx && idx < 4) && _materias[idx])
    _materias[idx] = NULL;
}
