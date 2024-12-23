/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:44:40 by juitz             #+#    #+#             */
/*   Updated: 2024/12/23 12:45:23 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::setType(const std::string &type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "...Generic WrongAnimal noises..." << std::endl;
}