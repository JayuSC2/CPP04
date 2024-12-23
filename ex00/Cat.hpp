/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:03:55 by juitz             #+#    #+#             */
/*   Updated: 2024/12/23 12:31:47 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat &other);

		void makeSound() const override;
};