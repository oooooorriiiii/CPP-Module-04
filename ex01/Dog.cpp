//
// Created by yuumo on 2022/08/02.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain_(new Brain()) {
	std::cout << BLUE << "Default constructor is called in Dog" << RESET << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type) {
	std::cout << BLUE << "Constructor is called in Dog" << RESET << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	std::cout << BLUE << "Copy constructor is called in Dog" << RESET << std::endl;
    if (dog.brain_) {
      brain_ = new Brain(*(dog.brain_));
    } else {
      brain_ = NULL;
    }
}

Dog::~Dog() {
	std::cout << BLUE << "Destructor is called in Dog" << RESET << std::endl;
    delete brain_;
}

Dog& Dog::operator=(const Dog &dog) {
	std::cout << "Assignation operator is called in Dog" << std::endl;
    if (this == &dog) {
      return *this;
    }
	_type = dog._type;
    delete brain_;
    if (dog.brain_) {
      brain_ = new Brain(*(dog.brain_));
    } else {
      brain_ = NULL;
    }
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WAN!" << std::endl;
}

const std::string &Dog::getIdea(const size_t &idx) const {
  return brain_->getIdea(idx);
}
