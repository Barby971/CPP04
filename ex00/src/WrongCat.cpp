/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:56 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/02 10:36:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
    std::cout << YELLOW "WrongCat Default Constructor called" DEFAULT << std::endl;
};

WrongCat::WrongCat(std::string type) : WrongAnimal("WrongCat")
{
    _type = type;
    std::cout << YELLOW "WrongCat Parametric Constructor -> called" DEFAULT << std::endl;
};

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal()
{
    std::cout << YELLOW "WrongCat copy Constructor -> called: " DEFAULT << std::endl;
    *this = a;
};

WrongCat& WrongCat::operator=(const WrongCat &a)
{
    std::cout << YELLOW "WrongCat Assignement Operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

WrongCat::~WrongCat()
{
    std::cout << YELLOW "WrongCat Destructor -> called" DEFAULT << std::endl;
};

void	WrongCat::makeSound(void) const
{
	std::cout << "🐈🐈🐈 Wrong cats do not meow at all 🐈🐈🐈" << std::endl;
}