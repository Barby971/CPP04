/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice .cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:22:19 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 15:24:23 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Ice.hpp"

Ice::Ice() : AMateria()
{
	_name = "";
	std::cout << "Ice Default Constructor -> called" << std::endl;
}

Ice::Ice(std::string name) : AMateria(name)
{
	std::cout << "Ice Overloaded Default Constructor -> called" << std::endl;
	_name = name;
}

Ice::Ice(Ice const &c)
{
	std::cout << "Ice Copy Constructor -> called" << std::endl;
	*this = c;
}

Ice &Ice::operator=(Ice const &c)
{
	std::cout << "Ice Assignement Operator -> called" << std::endl;
	AMateria::operator=(c);
	return (*this);
}

std::ostream &operator<<(std::ostream &c, const Ice &a)
{
    c << a.getType();
    return (c);
};

Ice::~Ice()
{
	std::cout << "Ice Destructor -> called" << std::endl;
}

void Ice::use(ICharacter &target)
{

}

AMateria *Ice::clone(void) const
{

}


