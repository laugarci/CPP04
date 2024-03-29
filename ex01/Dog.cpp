/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:57:00 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/26 10:39:57 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog& old)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = old;
}

Dog &Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
		this->_brain = new Brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Guau guau" << std::endl;
}

void Dog::printIdeas(int i) const
{
	std::cout << this->_brain->getIdeas(i) << std::endl;
}

void Dog::getIdeas() const
{
	int i = 0;

	while (i < 100)
	{
		this->printIdeas(i);
		i++;
	}
}
