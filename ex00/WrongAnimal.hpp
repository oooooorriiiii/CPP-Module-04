//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(const std::string &type);
  WrongAnimal(const WrongAnimal &wrongAnimal);
  WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
  virtual ~WrongAnimal();

  virtual void makeSound() const;
  const std::string &getType() const;

 protected:
  std::string _type;

};

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#endif //EX00_WRONGANIMAL_HPP
