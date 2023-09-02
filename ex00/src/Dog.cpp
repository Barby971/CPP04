/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:45 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/02 10:36:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
    std::cout << GREEN "Dog Default Constructor called" DEFAULT << std::endl;
};

Dog::Dog(std::string type) : Animal("Dog")
{
    _type = type;
    std::cout << GREEN "Dog Parametric Constructor -> called" DEFAULT << std::endl;
};

std::ostream &operator<<(std::ostream &c, const Dog &a)
{
    c << a.getType();
    return (c);
};

Dog::Dog(const Dog &a) : Animal()
{
    std::cout << GREEN "Dog Copy Constructor -> called: " DEFAULT << a << std::endl;
    *this = a;
};

Dog& Dog::operator=(const Dog &a)
{
    std::cout << GREEN "Dog Assignement Operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

Dog::~Dog()
{
    std::cout << GREEN "Dog Destructor -> called" DEFAULT << std::endl;
};

void	Dog::makeSound(void) const
{
	std::cout << "🐶🐶🐶 Dogs like barking 🐶🐶🐶" << std::endl;
}