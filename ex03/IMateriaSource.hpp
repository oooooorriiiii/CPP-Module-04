//
// Created by yuumo on 2022/09/24.
//

#ifndef EX03_IMATERIASOURCE_HPP
#define EX03_IMATERIASOURCE_HPP

#include <string.h>

#include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual             ~IMateriaSource() {}
  virtual void learnMateria(AMateria *) = 0;
  virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif //EX03_IMATERIASOURCE_HPP
