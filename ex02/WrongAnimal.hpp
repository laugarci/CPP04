/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:01:44 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/19 11:27:12 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& old);
		WrongAnimal	&operator=(const WrongAnimal& Wronganimal);
		std::string	getType(void) const;
		void makeSound(void) const;
};



#endif
