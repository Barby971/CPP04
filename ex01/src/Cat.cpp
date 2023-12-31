/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:40 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/02 18:38:40 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << MAGENTA "Cat default Constructor called" DEFAULT << std::endl;
	_type = "Cat";
    _brain = new Brain();
};

Cat::Cat(std::string type) : Animal("Cat")
{
    std::cout << MAGENTA "Cat Parametric Constructor -> called" DEFAULT << std::endl;
    _type = type;
    _brain = new Brain();
};

std::ostream &operator<<(std::ostream &c, const Cat &a)
{
    c << a.getType();
    return (c);
};

Cat::Cat(const Cat &a) : Animal()
{
    std::cout << MAGENTA "Cat copy Constructor -> called: " DEFAULT << a << std::endl;
    _brain = NULL;
    *this = a;
};

Cat& Cat::operator=(const Cat &a)
{
    std::cout << MAGENTA "Cat Assignement Operator -> called" DEFAULT << std::endl;
    if (this != &a)
    { 
        _type = a._type;
        if (_brain)
            delete _brain;
        if (a._brain)
            _brain = new Brain(*a._brain);
        else 
            _brain = NULL;
    }
    return (*this);
};

Cat::~Cat()
{
    if (_brain)
        delete _brain;
    std::cout << MAGENTA "Cat Destructor -> called" DEFAULT << std::endl;
};

void	Cat::makeSound(void) const
{
	std::cout << "🐱🐱🐱 Cats meow a lot 🐱🐱🐱" << std::endl;
}
