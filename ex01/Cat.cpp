//
// Created by yuumo on 2022/08/02.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain_(new Brain()) {
	std::cout << BLUE << "Default constructor is called in Cat" << RESET << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << BLUE << "Copy constructor is called in Cat" << RESET << std::endl;
    if (cat.brain_) {
      brain_ = new Brain(*(cat.brain_));
    } else {
      brain_ = NULL;
    }
}

Cat::~Cat() {
	std::cout << BLUE << "Destructor is called in Cat" << RESET << std::endl;
    delete brain_;
}

Cat& Cat::operator=(const Cat &cat) {
	std::cout << "Assignation operator is called in Cat" << std::endl;
    if (this == &cat) {
      return *this;
    }
	_type = cat._type;
    delete brain_;
    if (cat.brain_) {
      brain_ = new Brain(*(cat.brain_));
    } else {
      brain_ = NULL;
    }
	return *this;
}

void Cat::makeSound() const {
	std::cout << "NYAN" << std::endl;
}

const std::string &Cat::getIdea(const size_t &idx) const {
  return brain_->getIdea(idx);
}

void Cat::setIdea(const size_t &idx, const std::string &idea) {
  brain_->setIdea(idx, idea);
}
