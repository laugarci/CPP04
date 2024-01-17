/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:40:54 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 15:37:31 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		~Animal();
		Animal(const Animal& old);
		Animal	&operator=(const Animal& animal);
		std::string	getType() const;
};

std::ostream&	operator<<( std::ostream& out, const Animal& animal );
std::ostream&	operator<<( std::ostream& out, const Animal* animal );

#endif
