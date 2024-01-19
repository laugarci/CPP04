/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:12:23 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 16:10:30 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#include <iostream>
#include <string>

class Dog: public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog& old);
		Dog &operator=(const Dog& dog);
		void	makeSound() const;
};

#endif
