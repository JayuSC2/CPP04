/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:05:00 by juitz             #+#    #+#             */
/*   Updated: 2024/12/23 15:06:04 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <stdexcept>

int main()
{
	const int numAnimals = 10;
	Animal* animals[numAnimals];
	
	for (int i = 0; i < numAnimals / 2; ++i)
		animals[i] = new Dog();
	for (int i = numAnimals / 2; i < numAnimals; ++i)
		animals[i] = new Cat();
	for (int j = 0; j < numAnimals; ++j)
		animals[j]->makeSound();
	
	return (0);
/* 	Brain brain;
	
	try
	{
	std::cout << brain.getIdea(50) << std::endl;
	brain.setIdea(50, "New idea");
	std::cout << brain.getIdea(50) << std::endl;
	std::cout << brain.getIdea(101) << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0); */
}