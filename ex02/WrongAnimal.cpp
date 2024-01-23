/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:14:17 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/19 11:40:18 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
}

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = old;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& WrongAnimal)
{
	if (this != &WrongAnimal)
	{
		this->_type = WrongAnimal._type;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* WrongAnimal sounds *" << std::endl;
}
