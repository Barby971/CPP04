/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:45 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/02 18:31:12 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << GREEN "Dog Default Constructor called" DEFAULT << std::endl;
	_type = "Dog";
    _brain = new Brain();
};

Dog::Dog(std::string type) : Animal("Dog")
{
    std::cout << GREEN "Dog Parametric Constructor -> called" DEFAULT << std::endl;
    _type = type;
    _brain = new Brain();
};

std::ostream &operator<<(std::ostream &c, const Dog &a)
{
    c << a.getType();
    return (c);
};

Dog::Dog(const Dog &a) : Animal()
{
    std::cout << GREEN "Dog Copy Constructor -> called: " DEFAULT << a << std::endl;
    _brain = NULL;
    *this = a;
    };

Dog& Dog::operator=(const Dog &a)
{
    std::cout << GREEN "Dog Assignement Operator -> called" DEFAULT << std::endl;
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

Dog::~Dog()
{
    if (_brain)
        delete _brain;
    std::cout << GREEN "Dog Destructor -> called" DEFAULT << std::endl;
};

void	Dog::makeSound(void) const
{
	std::cout << "🐶🐶🐶 Dogs like barking 🐶🐶🐶" << std::endl;
}
