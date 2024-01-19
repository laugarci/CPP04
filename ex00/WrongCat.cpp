/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:04:29 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/19 11:29:35 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& old)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = old;
}

WrongCat &WrongCat::operator=(const WrongCat& WrongCat)
{
	if (this != &WrongCat)
	{
		this->_type = WrongCat.getType();
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong miaaaauuuuu..." << std::endl;
}
