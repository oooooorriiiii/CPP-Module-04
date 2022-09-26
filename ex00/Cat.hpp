//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
	virtual ~Cat();

	virtual void makeSound() const;
};

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#endif //EX00_CAT_HPP
