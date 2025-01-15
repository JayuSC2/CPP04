/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:05:00 by juitz             #+#    #+#             */
/*   Updated: 2025/01/15 17:28:59 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	const WrongAnimal* metaWrong = new WrongAnimal();
	//const Animal* j = new Dog();
	const WrongAnimal* iWrong = new WrongCat();
	//std::cout << j->getType() << " " << std::endl;
	//std::cout << iWrong->getType() << " " << std::endl;
	iWrong->makeSound();
	//j->makeSound();
	metaWrong->makeSound();
	
	delete iWrong;
	delete metaWrong;
	
	return (0);
}