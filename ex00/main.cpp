/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:25:25 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 16:36:19 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal animal;
	Cat cat;
	Dog dog;

	std::cout << animal.getType() << std::endl;
	std::cout << dog.getType() << std::endl;
	std::cout << cat.getType() << std::endl;

	std::cout << cat.makeSound() << std::end;
	std::cout << dog.makeSound() << std::endl;
}
