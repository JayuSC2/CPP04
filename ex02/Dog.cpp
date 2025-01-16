/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:19:10 by juitz             #+#    #+#             */
/*   Updated: 2025/01/16 16:31:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type), brain(new Brain())
{
	std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (brain != NULL)
            delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

/* Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
} */

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::setBrain(Brain *newBrain)
{
	if (brain != NULL)
		delete brain;
	brain = newBrain;
}

Brain* Dog::getBrain() const
{
	return (brain);
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}