/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:40 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/02 10:35:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
    std::cout << MAGENTA "Cat Default Constructor called" DEFAULT << std::endl;
};

Cat::Cat(std::string type) : Animal("Cat")
{
    _type = type;
    std::cout << MAGENTA "Cat Parametric Constructor -> called" DEFAULT << std::endl;
};

std::ostream &operator<<(std::ostream &c, const Cat &a)
{
    c << a.getType();
    return (c);
};

Cat::Cat(const Cat &a) : Animal()
{
    std::cout << MAGENTA "Cat Copy Constructor -> called: " DEFAULT << a << std::endl;
    *this = a;
};

Cat& Cat::operator=(const Cat &a)
{
    std::cout << MAGENTA "Cat Assignement Operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

Cat::~Cat()
{
    std::cout << MAGENTA "Cat Destructor -> called" DEFAULT << std::endl;
};

void	Cat::makeSound(void) const
{
	std::cout << "🐱🐱🐱 Cats meow a lot 🐱🐱🐱" << std::endl;
}