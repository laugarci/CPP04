/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:25:25 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/19 11:41:57 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "[ Type tests ]" << std::endl;
	std::cout << "Type: " << j->getType() << " " << std::endl;
	std::cout << "Type: " << i->getType() << " " << std::endl;
	std::cout << "[ Sounds test ]" << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << "[ Type tests ]" << std::endl;
	std::cout << "Type: " << wrongMeta->getType() << " " << std::endl;
	std::cout << "Type: " << wrongI->getType() << " " << std::endl;

	std::cout << "[ Sounts tests ]" << std::endl;
	wrongI->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongI;

	return 0;
}
