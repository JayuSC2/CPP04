/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:30:15 by juitz             #+#    #+#             */
/*   Updated: 2024/12/29 14:31:45 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type) : type(type)
{
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "AMateria copy assignment operator called" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}