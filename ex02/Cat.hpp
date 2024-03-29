/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:12:23 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/23 12:08:12 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Cat: public Animal {
	private:
		Brain	*_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& old);
		Cat &operator=(const Cat& cat);
		void	makeSound() const;
		void	printIdeas(int i) const;
		void	getIdeas() const;
};

#endif
