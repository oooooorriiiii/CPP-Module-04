//
// Created by yuumo on 2022/09/26.
//

#ifndef EX03__CURE_HPP_
#define EX03__CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria{
 public:
  Cure();
  Cure(const std::string &type);
  Cure(const Cure &cure);
  virtual ~Cure();
  Cure &operator=(const Cure &cure);

  void use(ICharacter &target);
  AMateria *clone() const;
};

#endif //EX03__CURE_HPP_
