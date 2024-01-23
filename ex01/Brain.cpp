/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:58:59 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/23 12:13:04 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
        this->_ideas[i] = "I don't have any idea";
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
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
    }
    return (*this);
}

std::string Brain::getIdeas(int i) const
{
	return (this->_ideas[i]);
}
