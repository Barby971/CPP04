/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:23:14 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 15:25:05 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/IMateriaSource.hpp"

IMateriaSource::IMateriaSource() : AMateria()
{
	std::cout << "IMateriaSource Default Constructor -> called" << std::endl;
}

IMateriaSource::IMateriaSource(std::string type) : AMateria(type)
{
	std::cout << "IMateriaSource Overloaded Default Constructor -> called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &c)
{
	std::cout << "IMateriaSource Copy Constructor -> called" << std::endl;
	*this = c;
}

IMateriaSource &IMateriaSource::operator=(IMateriaSource const &c)
{
	std::cout << "IMateriaSource Assignement Operator -> called" << std::endl;
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource Destructor -> called" << std::endl;
}