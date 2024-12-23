/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:51:43 by juitz             #+#    #+#             */
/*   Updated: 2024/12/23 12:32:00 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &copy);
		~Animal();
		
		Animal &operator=(const Animal &other);
		
		const std::string &getType() const;
		void setType(const std::string &type);
		
		virtual void makeSound() const;
};