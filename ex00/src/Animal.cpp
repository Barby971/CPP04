/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:37 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 16:41:26 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Animal.hpp"

Animal::Animal()
{
	_type = "";
    std::cout << GREEN "Default constructor called" DEFAULT << std::endl;
};

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << GREEN "Parametric constructor -> called" DEFAULT << std::endl;
};

std::ostream &operator<<(std::ostream &c, const Animal &a)
{
    c << a.getType();
    return (c);
};

Animal::Animal(const Animal &a)
{
    std::cout << GREEN "Copy constructor -> called: " DEFAULT << a << std::endl;
    _type = a._type;
};

Animal& Animal::operator=(const Animal &a)
{
    std::cout << GREEN "Assignement operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

Animal::~Animal()
{
    std::cout << GREEN "Destructor -> called" DEFAULT << std::endl;
};

std::string const &Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::makeSound(void)
{
	std::cout << "All animals scream 🥲 " << std::endl;
}