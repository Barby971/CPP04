/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:53 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 19:23:38 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "";
    std::cout << RED "Wrong Animal default constructor called" DEFAULT << std::endl;
};

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << RED "Wrong Animal Parametric constructor -> called" DEFAULT << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    std::cout << RED "Wrong Animal Copy constructor -> called: " DEFAULT << std::endl;
    _type = a._type;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a)
{
    std::cout << RED "Wrong Animal Assignement operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

WrongAnimal::~WrongAnimal()
{
    std::cout << RED "Wrong Animal Destructor -> called" DEFAULT << std::endl;
};

std::string WrongAnimal::getType(void) const
{
	return(this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "All animals scream 🥲 " << std::endl;
}