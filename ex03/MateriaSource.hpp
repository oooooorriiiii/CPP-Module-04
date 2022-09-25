//
// Created by yuumo on 2022/09/24.
//

#ifndef EX03_MATERIASOURCE_HPP_
#define EX03_MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
 public:
  MateriaSource();
  MateriaSource(const MateriaSource &materiaSource);
  virtual ~MateriaSource();
  MateriaSource &operator=(const MateriaSource &materiaSource);

  void  learnMateria(AMateria *materia);
  AMateria  *createMateria(std::string const &);

 private:
  AMateria *materias_[4];
};

#endif //EX03_MATERIASOURCE_HPP_
