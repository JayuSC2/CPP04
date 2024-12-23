/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:08:51 by juitz             #+#    #+#             */
/*   Updated: 2024/12/23 12:32:12 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog &copy);
		~Dog();

		Dog &operator=(const Dog &other);

		void makeSound() const override;
};