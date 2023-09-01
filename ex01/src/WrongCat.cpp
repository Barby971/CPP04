/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:56 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 12:10:12 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
    std::cout << YELLOW "WrongCat Cefault Constructor called" DEFAULT << std::endl;
};

WrongCat::WrongCat(std::string type) : WrongAnimal("WrongCat")
{
    _type = type;
    std::cout << YELLOW "WrongCat Parametric Constructor -> called" DEFAULT << std::endl;
};

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal()
{
    std::cout << YELLOW "WrongCat Copy Constructor -> called: " DEFAULT << std::endl;
    _type = a._type;
};

WrongCat& WrongCat::operator=(const WrongCat &a)
{
    std::cout << YELLOW "WrongCat Assignement operator -> called" DEFAULT << std::endl; 
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