/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:58:59 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/19 11:59:56 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(std::string type)
{
	_type = type;
}

Brain::Brain()
{
	_type = "Brain";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain& old)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = old;
}

Brain &Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		this->_type = brain._type;
	}
	return (*this);
}