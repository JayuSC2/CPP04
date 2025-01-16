/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:08:51 by juitz             #+#    #+#             */
/*   Updated: 2025/01/16 15:51:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog &copy);
		~Dog();

		Dog &operator=(const Dog &other);

		Brain* getBrain() const;
		void setBrain(Brain* newBrain);
		void makeSound() const;
};