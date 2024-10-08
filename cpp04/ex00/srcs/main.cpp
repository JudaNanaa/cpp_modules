/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:10:23 by madamou           #+#    #+#             */
/*   Updated: 2024/10/08 16:00:07 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/include.hpp"
#include "class/includes/WrongAnimal.hpp"

int main()
{
    // Test basique avec Animal, Dog et Cat
    std::cout << "--- Tests avec Animal, Dog et Cat ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " fait ce son: ";
    dog->makeSound(); // Devrait aboyer

    std::cout << cat->getType() << " fait ce son: ";
    cat->makeSound(); // Devrait miauler

    std::cout << meta->getType() << " fait ce son: ";
    meta->makeSound();

    std::cout << std::endl;
    std::cout << "--- Tests avec WrongAnimal et WrongCat ---" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " fait ce son: ";
    wrongAnimal->makeSound();
    std::cout << wrongCat->getType() << " fait ce son: ";
    wrongCat->makeSound();
    return 0;
}
