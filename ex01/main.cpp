//
// Created by yuumo on 2022/08/02.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void  printDog(const Dog& dog, const size_t sample_i) {
  std::cout << GREEN << dog.getType() << "'s idea[" << sample_i << "]:"
            << dog.getIdea(sample_i) << RESET << std::endl;
}

void  printCat(const Cat& cat, const size_t sample_i) {
  std::cout << GREEN << cat.getType() << "'s idea[" << sample_i << "]:"
            << cat.getIdea(sample_i) << RESET << std::endl;
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
    }

    for (int i = 0; i < 4; i++) {
      delete animals[i];
    }
  }
  {
    std::cout << "*****Test 02*****" << std::endl;
    std::cout << "Dog copy, getIdea, setIdea" << std::endl;
    std::cout << "*****************" << std::endl;

    // Check deep copy
    Dog dog1;
    Dog dog2 = dog1;
    dog1.setIdea(1, "I have lunch");
    printDog(dog1, 1);
    printDog(dog2, 1);

    dog1.setIdea(1, "I learn programming");
    printDog(dog1, 1);
    printDog(dog2, 1);

    dog2 = dog1;
    printDog(dog1, 1);
    printDog(dog2, 1);

    // Check error case for Dog::getIdea, Dog::setIdea
    Dog dog3;
    dog3.setIdea(4242, "I have lunch");
    dog3.getIdea(4242);
  }
  {
    std::cout << "*****Test 03*****" << std::endl;
    std::cout << "Cat copy, getIdea, setIdea" << std::endl;
    std::cout << "*****************" << std::endl;

    // Check deep copy
    Cat cat1;
    Cat cat2 = cat1;
    cat1.setIdea(1, "I have lunch");
    printCat(cat1, 1);
    printCat(cat2, 1);

    cat1.setIdea(1, "I learn programming");
    printCat(cat1, 1);
    printCat(cat2, 1);

    cat2 = cat1;
    printCat(cat1, 1);
    printCat(cat2, 1);

    // Check error case for Cat::getIdea, Cat::setIdea
    Cat cat3;
    cat3.setIdea(4242, "I have lunch");
    cat3.getIdea(4242);
  }
  return 0;
}