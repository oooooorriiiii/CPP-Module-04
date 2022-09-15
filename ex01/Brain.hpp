//
// Created by yuumo on 2022/08/02.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const std::string ideas);
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);
	virtual ~Brain();
private:
	std::string	_ideas[100];
};


#endif //EX01_BRAIN_HPP
