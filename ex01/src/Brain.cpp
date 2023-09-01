/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:30:28 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 12:06:38 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Brain.hpp"

Brain::Brain() 
{
    std::cout << BOLD "Brain Default Constructor called" DEFAULT << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        _ideas[i] = "Another Brand New Idea!";
};

Brain::Brain(std::string ideas[100])
{
    std::cout << BOLD "Brain Parametric Constructor -> called" DEFAULT << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        _ideas[i] = ideas[i];
};

Brain::Brain(const Brain &c)
{
    std::cout << BOLD "Brain Copy Constructor -> called " DEFAULT << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        _ideas[i] = c._ideas[i];
};

Brain& Brain::operator=(const Brain &a)
{
    std::cout << BOLD "Brain Assignement Operator -> called" DEFAULT << std::endl; 
    if (this != &a)
    {
        for (int i = 0 ; i < 100 ; i++)
        _ideas[i] = a._ideas[i];
    }
    return (*this);
};

Brain::~Brain()
{
    std::cout << BOLD "Brain Destructor -> called" DEFAULT << std::endl;
};
