/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:40:54 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/23 16:57:35 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"
#define RED "\x1B[31M"
#define BGRED "\x1B[41m"
#define GREEN "\x1B[32m"

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal& old);
		Animal	&operator=(const Animal& animal);
		std::string	getType(void) const;
		virtual void makeSound(void) const = 0;
};



#endif
