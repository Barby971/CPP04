/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:02:20 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 16:14:56 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor -> called" << std::endl;
	_type = "";
}

AMateria::AMateria(std::string type)
{
	std::cout << "AMateria Overloaded Default Constructor -> called" << std::endl;
	_type = type;
}

AMateria::AMateria(AMateria const &c)
{
	std::cout << "AMateria Copy Constructor -> called" << std::endl;
	*this = c;
}

AMateria &AMateria::operator=(AMateria const &c)
{
	std::cout << "AMateria Assignement Operator -> called" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor -> called" << std::endl;
}

AMateria::std::string	const &getType(void) const
{
	return (_type);
}

AMateria::void use(ICharacter &target)
{

}
