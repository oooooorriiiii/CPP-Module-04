//
// Created by yuumo on 2022/08/02.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main() {
	const Animal* d = new Dog();
	const Animal* c = new Cat();

	d->makeSound();
	c->makeSound();

	delete d;
	delete c;

	std::cout << "*******************************************" << std::endl;

	Animal* animals[5];

	for (int i = 0; i < 5; i++) {
		if (i % 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	for (int i = 0; i < 5; i++) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < 5; i++) {
		delete animals[i];
	}

	return 0;
}