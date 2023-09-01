/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:17:14 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 16:14:47 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cure.hpp"

Cure::Cure() : AMateria()
{
	_name = "";
	std::cout << "Cure Default Constructor -> called" << std::endl;
}

Cure::Cure(std::string name) : AMateria(name)
{
	std::cout << "Cure Overloaded Default Constructor -> called" << std::endl;
	_name = name;
}

Cure::Cure(Cure const &c)
{
	std::cout << "Cure Copy Constructor -> called" << std::endl;
	*this = c;
}

Cure &Cure::operator=(Cure const &c)
{
	std::cout << "Cure Assignement Operator -> called" << std::endl;
	AMateria::operator=(c);
	return (*this);
}

std::ostream &operator<<(std::ostream &c, const Cure &a)
{
    c << a.getType();
    return (c);
};

Cure::~Cure()
{
	std::cout << "Cure Destructor -> called" << std::endl;
}

void Cure::use(ICharacter &target)
{

}

AMateria *Cure::clone(void) const
{

}
