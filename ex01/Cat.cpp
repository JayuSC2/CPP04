/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:04:13 by juitz             #+#    #+#             */
/*   Updated: 2025/01/16 16:31:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type), brain(new Brain())
{
	std::cout << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}
Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (brain != NULL)
            delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

/* Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
} */

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::setBrain(Brain *newBrain)
{
	if (brain != NULL)
		delete brain;
	brain = newBrain;
}

Brain* Cat::getBrain() const
{
	return (brain);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}