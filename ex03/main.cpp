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
      IMateriaSource *materiaSource = new MateriaSource();
      materiaSource->learnMateria(new Ice());

      ICharacter *Alice = new Character("Alice");
      ICharacter *Bob = new Character("Bob");

      AMateria *aMateria;
      aMateria = materiaSource->createMateria("ice");
      Alice->equip(aMateria);
      Alice->equip(aMateria);
      Alice->equip(aMateria);
      Alice->equip(aMateria);

      Alice->use(0, *Bob);
      Alice->use(1, *Bob);
      Alice->use(2, *Bob);
      Alice->use(3, *Bob);

      delete Bob;
      delete Alice;
      delete materiaSource;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }

  return 0;
}
