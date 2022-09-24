//
// Created by yuumo on 2022/09/24.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
 public:
  Ice();
  Ice(const std::string &type);
  Ice(const Ice &ice);
  virtual ~Ice();
  Ice &operator=(const Ice &ice);

  void use(ICharacter &target);
  AMateria *close() const;
};

#endif //EX03_ICE_HPP
