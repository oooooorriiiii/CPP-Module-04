//
// Created by yuumo on 2022/08/02.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
  {
    std::cout << "*****Subject main*****" << std::endl;
    const Animal *d = new Dog();
    const Animal *c = new Cat();

    d->makeSound();
    c->makeSound();

    delete d;
    delete c;
  }
  {
    std::cout << "*****Test 01 for subject*****" << std::endl;
    Animal *animals[4];

    for (int i = 0; i < 4; i++) {
      if (i % 2) {
        animals[i] = new Cat();
      } else {
        animals[i] = new Dog();
      }
    }

    Dog dog;
//  std::cout << dog.getIdeas(0) << std::endl;
    for (int i = 0; i < 4; i++) {
      animals[i]->makeSound();
      int sample_index = 3; // 0 ~ 99
      std::cout << animals[i]->getType() << "'s idea[" << sample_index << "]:"
                << animals[i]->getIdea(sample_index) << std::endl;
    }

    for (int i = 0; i < 4; i++) {
      delete animals[i];
    }
  }
  return 0;
}