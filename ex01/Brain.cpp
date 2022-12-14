//
// Created by yuumo on 2022/08/02.
//

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		_ideas[i] = "idea";
	}
	std::cout << "Default constructor is called in Brain" << std::endl;
}

Brain::Brain(const std::string ideas) {
	for (int i = 0; i < 100; i++) {
		_ideas[i] = ideas;
	}
	std::cout << "Constructor is called in Brain" << std::endl;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << "Copy constructor is called in Brain" << std::endl;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << "Assignation operator is called in Brain" << std::endl;
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = brain._ideas[i];
	}
	return *this;
}

Brain::~Brain() {}

const std::string &Brain::getIdea(const size_t &idx) const {
  if (idx < 100) {
    return _ideas[idx];
  } else {
    std::cout << MAGENTA << "Return first idea, because array index is out of range" << RESET << std::endl;
    return _ideas[0];
  }
}

void Brain::setIdea(const size_t &idx, const std::string &idea) {
  if (idx < 100) {
    _ideas[idx] = idea;
  } else {
    std::cout << MAGENTA << "Can't set idea, because array index is out of range" << RESET << std::endl;
  }
}
