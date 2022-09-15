//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(const std::string& type);
	WrongCat(const WrongCat& wrongCat);
	WrongCat& operator=(const WrongCat& wrongCat);
	virtual ~WrongCat();

	void	makeSound() const;
};


#endif //EX00_WRONGCAT_HPP
