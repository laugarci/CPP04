/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:57:00 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/25 17:43:21 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
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
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaauuuuu..." << std::endl;
}
