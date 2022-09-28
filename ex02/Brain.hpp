//
// Created by yuumo on 2022/08/02.
//

#ifndef EX02_BRAIN_HPP
#define EX02_BRAIN_HPP

#include <iostream>

class Brain {
 public:
  Brain();
  Brain(const std::string ideas);
  Brain(const Brain& brain);
  Brain& operator=(const Brain& brain);
  virtual ~Brain();

  const std::string &getIdea(const size_t &idx) const;
  void  setIdea(const size_t &idx, const std::string &idea);
 private:
  std::string	_ideas[100];
};

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

#endif //EX02_BRAIN_HPP
