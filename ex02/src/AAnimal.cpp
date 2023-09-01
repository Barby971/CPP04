/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:37 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 12:36:08 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "";
    std::cout << BLUE "AAnimal Default Constructor called" DEFAULT << std::endl;
};

AAnimal::AAnimal(std::string type)
{
    _type = type;
    std::cout << BLUE "AAnimal Parametric Constructor -> called" DEFAULT << std::endl;
};

AAnimal::AAnimal(const AAnimal &a)
{
    std::cout << BLUE "AAnimal Copy Constructor -> called: " DEFAULT << std::endl;
    _type = a._type;
};

AAnimal& AAnimal::operator=(const AAnimal &a)
{
    std::cout << BLUE "AAnimal Assignement Operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

AAnimal::~AAnimal()
{
    std::cout << BLUE "AAnimal Destructor -> called" DEFAULT << std::endl;
};

std::string AAnimal::getType(void) const
{
	return(this->_type);
}

/*void	AAnimal::makeSound(void) const
{
	std::cout << "🦊🦁🐷 All ABSTRACT animals scream 🐷🦁🦊" << std::endl << std::endl;
}*/