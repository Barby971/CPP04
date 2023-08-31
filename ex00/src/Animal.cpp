/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:37 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 19:09:52 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Animal.hpp"

Animal::Animal()
{
	_type = "";
    std::cout << GREEN "Animal Default constructor called" DEFAULT << std::endl;
};

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << GREEN "Animal Parametric constructor -> called" DEFAULT << std::endl;
};

Animal::Animal(const Animal &a)
{
    std::cout << GREEN "Animal Copy constructor -> called: " DEFAULT << std::endl;
    _type = a._type;
};

Animal& Animal::operator=(const Animal &a)
{
    std::cout << GREEN "Animal Assignement operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

Animal::~Animal()
{
    std::cout << GREEN "Animal Destructor -> called" DEFAULT << std::endl;
};

std::string Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "All animals scream 🥲 " << std::endl;
}