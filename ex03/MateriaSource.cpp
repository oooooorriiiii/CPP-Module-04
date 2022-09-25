//
// Created by yuumo on 2022/09/24.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materias_() {
  for (size_t i = 0; i < 4; i++) {
    materias_[i] = NULL;
  }
}
MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
  *this = materiaSource;
}

MateriaSource::~MateriaSource() {
  for (size_t i = 0; i < 4 ; i++) {
    if (materias_[i]) {
      delete materias_[i];
    }
  }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materiaSource) {
  if (this == &materiaSource)
    return *this;
  for (size_t i = 0; i < 4; i++) {
    delete materias_[i];
    if (materiaSource.materias_[i]) {
      materias_[i] = materias_[i]->clone();
    }
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
  for (size_t i = 0; i < 4; i++) {
    if (!materias_[i]) {
      materias_[i] = m;
      return ;
    }
  }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
  for (size_t i = 0; i < 4; i++) {
    if (!materias_[i]) {
      continue;
    }
    if (materias_[i]->getType() == type) {
      return materias_[i]->clone();
    }
  }
  return NULL;
}