/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:35:33 by juitz             #+#    #+#             */
/*   Updated: 2024/12/29 15:04:04 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
	protected:
		std::string name;
	public:
		ICharacter();
		ICharacter(const std::string &name);
		ICharacter(const ICharacter &copy);
		virtual ~ICharacter();

		ICharacter &operator=(const ICharacter &other);
		
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};