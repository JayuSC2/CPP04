/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:40:14 by juitz             #+#    #+#             */
/*   Updated: 2024/12/29 14:53:59 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(const std::string &name) : name(name)
{
	std::cout << "ICharacter name constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "ICharacter copy constructor called" << std::endl;
	*this = copy;
}

ICharacter &ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
		this->name = other.name;
	std::cout << "ICharacter copy assignment operator called" << std::endl;
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;
}