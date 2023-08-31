/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:56 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 19:10:36 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
    std::cout << MAGENTA "WrongCat default constructor called" DEFAULT << std::endl;
};

WrongCat::WrongCat(std::string type) : WrongAnimal("WrongCat")
{
    _type = type;
    std::cout << MAGENTA "WrongCat Parametric constructor -> called" DEFAULT << std::endl;
};

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal()
{
    std::cout << MAGENTA "WrongCat copy constructor -> called: " DEFAULT << std::endl;
    _type = a._type;
};

WrongCat& WrongCat::operator=(const WrongCat &a)
{
    std::cout << MAGENTA "WrongCat Assignement operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

WrongCat::~WrongCat()
{
    std::cout << MAGENTA "WrongCat Destructor -> called" DEFAULT << std::endl;
};

void	WrongCat::makeSound(void) const
{
	std::cout << "🐈🐈🐈 Cats meow a lot 🐈🐈🐈" << std::endl;
}