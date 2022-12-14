//
// Created by yuumo on 2022/08/02.
//

#ifndef EX02_DOG_HPP
#define EX02_DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
 public:
  Dog();
  Dog(const Dog& dog);
  Dog& operator=(const Dog& dog);
  virtual ~Dog();

  void makeSound() const;
  const std::string &getIdea(const size_t &idx) const;
  void  setIdea(const size_t &idx, const std::string &idea);

 private:
  Brain *brain_;
};

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#endif //EX02_DOG_HPP
