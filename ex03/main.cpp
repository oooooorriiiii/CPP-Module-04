//
// Created by yuumo on 2022/08/02.
//

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {

  {
    std::cout << "*****Subject Test*****" << std::endl;
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
  }
  {
    try {
      std::cout << "*****Test 01*****" << std::endl;
      std::cout << "All Ice" << std::endl;
      IMateriaSource *materiaSource = new MateriaSource();
      materiaSource->learnMateria(new Ice());

      ICharacter *Alice = new Character("Alice");
      ICharacter *Bob = new Character("Bob");

      AMateria *aMateria;
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);

      Alice->use(0, *Bob);
      Alice->use(1, *Bob);
      Alice->use(2, *Bob);
      Alice->use(3, *Bob);
      // out of range access
      Alice->use(4, *Bob);

      delete Bob;
      delete Alice;
      delete materiaSource;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  {
    try {
      std::cout << "*****Test 02*****" << std::endl;
      std::cout << "All Cure" << std::endl;
      IMateriaSource *materiaSource = new MateriaSource();
      materiaSource->learnMateria(new Cure());

      ICharacter *Alice = new Character("Alice");
      ICharacter *Bob = new Character("Bob");

      AMateria *aMateria;
      aMateria = materiaSource->createMateria("cure");
      Alice->equip(aMateria);
      aMateria = materiaSource->createMateria("cure");
      Alice->equip(aMateria);
      aMateria = materiaSource->createMateria("cure");
      Alice->equip(aMateria);
      aMateria = materiaSource->createMateria("cure");
      Alice->equip(aMateria);

      Alice->use(0, *Bob);
      Alice->use(1, *Bob);
      Alice->use(2, *Bob);
      Alice->use(3, *Bob);
      // out of range access
      Alice->use(4, *Bob);

      delete Bob;
      delete Alice;
      delete materiaSource;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  {
    try {
      std::cout << "*****Test 03*****" << std::endl;
      std::cout << "Learn only Cure, use Ice" << std::endl;
      IMateriaSource *materiaSource = new MateriaSource();
      materiaSource->learnMateria(new Cure());

      ICharacter *Alice = new Character("Alice");
      ICharacter *Bob = new Character("Bob");

      AMateria *aMateria;
      // don't learn "ice" materia
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);

      Alice->use(0, *Bob);

      delete Bob;
      delete Alice;
      delete materiaSource;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  {
    try {
      std::cout << "*****Test 04*****" << std::endl;
      std::cout << "Without learning anything, use Ice" << std::endl;
      IMateriaSource *materiaSource = new MateriaSource();

      ICharacter *Alice = new Character("Alice");
      ICharacter *Bob = new Character("Bob");

      AMateria *aMateria;
      // don't learn "ice" materia
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);

      Alice->use(0, *Bob);

      delete Bob;
      delete Alice;
      delete materiaSource;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  {
    try {
      std::cout << "*****Test 05*****" << std::endl;
      std::cout << "unequip" << std::endl;
      IMateriaSource *materiaSource = new MateriaSource();
      materiaSource->learnMateria(new Ice());

      ICharacter *Alice = new Character("Alice");
      ICharacter *Bob = new Character("Bob");

      AMateria *aMateria;
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);

      Alice->use(0, *Bob);
      Alice->unequip(0);
      // access to equip after unequip
      Alice->use(0, *Bob);

      delete Bob;
      delete Alice;
      delete materiaSource;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  {
    try {
      std::cout << "*****Test 06*****" << std::endl;
      std::cout << "empty materia access" << std::endl;
      IMateriaSource *materiaSource = new MateriaSource();
      materiaSource->learnMateria(new Ice());

      ICharacter *Alice = new Character("Alice");
      ICharacter *Bob = new Character("Bob");

      AMateria *aMateria;
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);

      Alice->use(0, *Bob);

      // access to empty materia
      Alice->use(1, *Bob);

      delete Bob;
      delete Alice;
      delete materiaSource;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }

  return 0;
}
