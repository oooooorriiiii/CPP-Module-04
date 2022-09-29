//
// Created by yuumo on 2022/08/02.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  {
    std::cout << "*****Subject Test*****" << std::endl;

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
  }
  {
    std::cout << "*****Test 01*****" << std::endl;
    std::cout << "WrongAnimal" << std::endl;

    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat(); // upcast
    const WrongCat *k = new WrongCat();
    std::cout << k->getType() << std::endl;
    //
    k->makeSound();
    wrongCat->makeSound();
    static_cast<const WrongAnimal *>(k)->makeSound();
    wrongMeta->makeSound();

    delete wrongMeta;
    delete k;
    delete wrongCat;
  }

  return 0;
}