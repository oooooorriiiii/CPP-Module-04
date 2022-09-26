//
// Created by yuumo on 2022/08/02.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

// Concrete class implemented the ICharacter class
class Character : public ICharacter {
 public:
  Character();
  Character(const std::string &name);
  Character(const Character &character);
  Character &operator=(const Character &character);
  virtual ~Character();

  virtual const std::string &getName() const;
  virtual void equip(AMateria *m);
  virtual void unequip(int idx);
  virtual void use(int idx, ICharacter &target);

 private:
  const std::string _name;
  AMateria *_materias[4];
};

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#endif //EX03_CHARACTER_HPP
