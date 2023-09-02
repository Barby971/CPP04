/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:37 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/02 10:35:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Animal.hpp"

Animal::Animal()
{
	_type = "";
    std::cout << BLUE "Animal Default Constructor called" DEFAULT << std::endl;
};

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << BLUE "Animal Parametric Constructor -> called" DEFAULT << std::endl;
};

Animal::Animal(const Animal &a)
{
    std::cout << BLUE "Animal Copy Constructor -> called: " DEFAULT << std::endl;
    *this = a;
};

Animal& Animal::operator=(const Animal &a)
{
    std::cout << BLUE "Animal Assignement Operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

Animal::~Animal()
{
    std::cout << BLUE "Animal Destructor -> called" DEFAULT << std::endl;
};

std::string Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "🦊🦁🐷 All animals scream 🐷🦁🦊" << std::endl << std::endl;
}