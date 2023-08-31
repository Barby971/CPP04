/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:40 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 16:39:21 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "";
    std::cout << MAGENTA "Cat default constructor called" DEFAULT << std::endl;
};

Cat::Cat(std::string type) : Animal(type)
{
    _type = type;
    std::cout << MAGENTA "Cat Parametric constructor -> called" DEFAULT << std::endl;
};

std::ostream &operator<<(std::ostream &c, const Cat &a)
{
    c << a.getType();
    return (c);
};

Cat::Cat(const Cat &a) : Animal()
{
    std::cout << MAGENTA "Cat copy constructor -> called: " DEFAULT << a << std::endl;
    _type = a._type;
};

Cat& Cat::operator=(const Cat &a)
{
    std::cout << MAGENTA "Cat Assignement operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

Cat::~Cat()
{
    std::cout << MAGENTA "Cat Destructor -> called" DEFAULT << std::endl;
};

void	Cat::makeSound(void)
{
	std::cout << "🐈🐈🐈 Cats meow a lot 🐈🐈🐈" << std::endl;
}