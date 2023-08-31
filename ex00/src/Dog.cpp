/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:45 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 16:39:08 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "";
    std::cout << BLUE "Dog default constructor called" DEFAULT << std::endl;
};

Dog::Dog(std::string type) : Animal(type)
{
    _type = type;
    std::cout << BLUE "Dog parametric constructor -> called" DEFAULT << std::endl;
};

std::ostream &operator<<(std::ostream &c, const Dog &a)
{
    c << a.getType();
    return (c);
};

Dog::Dog(const Dog &a) : Animal()
{
    std::cout << BLUE "Dog copy constructor -> called: " DEFAULT << a << std::endl;
    _type = a._type;
};

Dog& Dog::operator=(const Dog &a)
{
    std::cout << BLUE "Dog assignement operator -> called" DEFAULT << std::endl; 
    if (this != &a)
        _type = a._type;
    return (*this);
};

Dog::~Dog()
{
    std::cout << BLUE "Dog destructor -> called" DEFAULT << std::endl;
};

void	Dog::makeSound(void)
{
	std::cout << "🐶🐶🐶 Dogs like barking 🐶🐶🐶" << std::endl;
}