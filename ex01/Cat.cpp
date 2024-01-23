/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:57:00 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/23 11:23:32 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& old)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = old;
}

Cat &Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		this->_type = cat.getType();
		this->_brain = new Brain;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaauuuuu..." << std::endl;
}

void	Cat::getIdeas() const
{
	std::cout << "Cat says: " << this->_brain->getIdeas() << std::endl;
}
