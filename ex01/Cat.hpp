/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:03:55 by juitz             #+#    #+#             */
/*   Updated: 2025/01/16 15:51:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat &other);
		
		Brain* getBrain() const;
		void setBrain(Brain* newBrain);
		void makeSound() const;
};