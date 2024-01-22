/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:00:05 by laugarci          #+#    #+#             */
/*   Updated: 2024/01/22 12:03:21 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(std::string type);
		virtual ~Brain();
		Brain(const Brain& old);
		Brain	&operator=(const Brain& brain);
};

#endif
