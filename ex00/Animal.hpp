//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <iostream>

class Animal {
 public:
  Animal();
  Animal(const std::string &type);
  Animal(const Animal &animal);
  Animal &operator=(const Animal &animal);
  virtual ~Animal();

  virtual void makeSound() const;
  const std::string &getType() const;

 protected:
  std::string _type;
};

# define RESET          "\033[0m"
# define RED            "\033[31m"          /* Red */
# define GREEN          "\033[32m"          /* Green */
# define YELLOW         "\033[33m"          /* Yellow */
# define BLUE           "\033[34m"          /* Blue */
# define MAGENTA        "\033[35m"          /* Magenta */
# define CYAN           "\033[36m"          /* Cyan */

#endif //EX00_ANIMAL_HPP
