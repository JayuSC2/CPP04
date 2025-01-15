/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:19:10 by juitz             #+#    #+#             */
/*   Updated: 2024/12/23 12:23:46 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal("Dog")
{
	std::cout << "Dog type constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}