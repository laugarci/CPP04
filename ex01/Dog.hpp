/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:09:40 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/19 12:18:09 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Dog: public Animal {
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& old);
		Dog &operator=(const Dog& dog);
		void	makeSound() const;
};

#endif
