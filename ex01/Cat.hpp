/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:12:23 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/17 16:13:36 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#include <iostream>
#include <string>

class Cat: public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat& old);
		Cat &operator=(const Cat& cat);
		void	makeSound() const;
};

#endif
