//
// Created by yuumo on 2022/08/02.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void  printAnimalIdea(Animal *animals, const size_t sample_i) {
  std::cout << animals->getType() << "'s idea[" << sample_i << "]:"
            << animals->getIdea(sample_i) << std::endl;
}

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

    for (int i = 0; i < 4; i++) {
      animals[i]->makeSound();
      animals[i]->setIdea(3, "I have lunch");
      animals[i]->setIdea(4242, "I have lunch"); // Out of range
      printAnimalIdea(animals[i], 3);
      printAnimalIdea(animals[i], 4);
      printAnimalIdea(animals[i], 424242); // Out of range
    }

    for (int i = 0; i < 4; i++) {
      delete animals[i];
    }
  }
  return 0;
}