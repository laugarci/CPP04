/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:57:00 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/26 10:50:17 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type)
{
	_type = type;
}

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal& old)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = old;
}

Animal &Animal::operator=(const Animal& animal)
{
	if (this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}
