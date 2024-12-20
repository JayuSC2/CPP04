/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:51:37 by juitz             #+#    #+#             */
/*   Updated: 2024/12/20 19:06:41 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cerr << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cerr << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cerr << "Animal copy assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cerr << "Animal destructor called" << std::endl;
}