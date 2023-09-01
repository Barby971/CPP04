/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:23:14 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 15:24:56 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ICharacter.hpp"

ICharacter::ICharacter() : AMateria()
{
	std::cout << "ICharacter Default Constructor -> called" << std::endl;
}

ICharacter::ICharacter(std::string type) : AMateria(type)
{
	std::cout << "ICharacter Overloaded Default Constructor -> called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &c)
{
	std::cout << "ICharacter Copy Constructor -> called" << std::endl;
	*this = c;
}

ICharacter &ICharacter::operator=(ICharacter const &c)
{
	std::cout << "ICharacter Assignement Operator -> called" << std::endl;
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter Destructor -> called" << std::endl;
}