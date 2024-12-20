/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:19:10 by juitz             #+#    #+#             */
/*   Updated: 2024/12/20 19:21:03 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal()
{
	std::cerr << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cerr << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	std::cerr << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cerr << "Dog destructor called" << std::endl;
}