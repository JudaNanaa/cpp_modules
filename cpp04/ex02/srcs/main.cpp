/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:10:23 by madamou           #+#    #+#             */
/*   Updated: 2024/10/23 10:23:02 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/include.hpp"
#include "class/includes/Animal.hpp"

int main()
{
  std::cout << "-------------------[Mandatory tests 0]----------------------" << std::endl;
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;//should not create a leak
  delete i;
  std::cout << "-------------------[Mandatory tests 1]----------------------" << std::endl;
  std::cout << "~~~~~~~~~~~~~~~[INIT]~~~~~~~~~~~~~~~" << std::endl;
  Animal *animals[10];
  for (int i = 0; i < 10; i++) {
    std::cout << "[" << i << "] ";
    if (i < 5)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
    if (!animals[i]) {
      for (int j = 0; j < i; j++) {delete animals[j];}
      std::cout << "Memory alloctation error" << std::endl;
      return 1;
    }
  }

  std::cout << "~~~~~~~~~~~~~~~[COPY]~~~~~~~~~~~~~~~" << std::endl;
  dynamic_cast<Cat*>(animals[0])->inception("Big boss is a one man army", 0);
  dynamic_cast<Dog*>(animals[5])->inception("Ocelot is the best gun shooter", 0);
  
  Cat* catCopy = new Cat(*dynamic_cast<Cat*>(animals[0]));
  if (!catCopy) {
    std::cout << "Memory alloctation error" << std::endl;
    for (int i = 0; i < 10; i++) {delete animals[i];}
    return 1;
  }
  Dog* dogCopy = new Dog(*dynamic_cast<Dog*>(animals[5]));
  if (!dogCopy) {
    for (int i = 0; i < 10; i++) {delete animals[i];}
    delete catCopy;
    std::cout << "Memory alloctation error" << std::endl;
    return 1;
  }

  std::cout << "~~~~~~~~~~~~~~~[ACTIONS]~~~~~~~~~~~~~~~" << std::endl;
  for (int i = 0; i < 10; i++) {
    animals[i]->makeSound();
    if (i == 0)
      std::cout << dynamic_cast<Cat*>(animals[i])->getIdeas(0) << std::endl;
    if (i == 5)
      std::cout << dynamic_cast<Dog*>(animals[i])->getIdeas(0) << std::endl;
  }

  std::cout << "~~~~~~~~~~~~~~~[CLEAR]~~~~~~~~~~~~~~~" << std::endl;
  for (int i = 0; i  < 10; i++) {delete animals[i];}
  delete catCopy;
  delete dogCopy;
  return 0;
}
