//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  WrongCat(const WrongCat &wrongCat);
  WrongCat &operator=(const WrongCat &wrongCat);
  virtual ~WrongCat();

  void makeSound() const;
};

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#endif //EX00_WRONGCAT_HPP
