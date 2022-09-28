//
// Created by yuumo on 2022/08/02.
//

#ifndef EX02_ANIMAL_HPP
#define EX02_ANIMAL_HPP

#include <iostream>

class AAnimal {
 public:
  AAnimal();
  AAnimal(const std::string& type);
  AAnimal(const AAnimal &animal);
  AAnimal& operator=(const AAnimal& animal);
  virtual ~AAnimal();

  virtual void makeSound() const = 0;
  const std::string& getType() const;

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

#endif //EX02_ANIMAL_HPP
