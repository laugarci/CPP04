/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:25:25 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/22 14:46:53 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << BGRED "[ CONSTRUCTORS ]" RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << BGRED"[ Type tests ]"RESET << std::endl;
	std::cout << GREEN"Type: "RESET << j->getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << i->getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << meta->getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << wrongMeta->getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << wrongI->getType() << " " << std::endl;
	std::cout << BGRED"[ Sounds test ]"RESET << std::endl;
	std::cout << GREEN"Sound: "RESET;
	i->makeSound();
	std::cout << GREEN"Sound: "RESET;
	j->makeSound();
	std::cout << GREEN"Sound: "RESET;
	meta->makeSound();
	std::cout << GREEN"Sound: "RESET;
	wrongI->makeSound();
	std::cout << GREEN"Sound: "RESET;
	wrongMeta->makeSound();

	std::cout << BGRED"[ DESTRUCTORS ]" RESET << std::endl;
	delete wrongMeta;
	delete wrongI;
	delete meta;
	delete i;
	delete j;

	std::cout << BGRED"[ ARRAY OF ANIMALS CREATION ]" RESET<< std::endl;
	const Animal *Animals[4];
	Animals[0] = new Cat;
	Animals[1] = new Cat;
	Animals[2] = new Dog;
	Animals[3] = new Dog;

	int k;
	k = 0;
	std::cout << BGRED "[ DESTRUCTOR LOOP ]" RESET << std::endl;
	while (k < 4)
	{
		delete Animals[k];
		k++;
	}
	return 0;
}
