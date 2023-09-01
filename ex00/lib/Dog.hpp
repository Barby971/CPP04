/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:25 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 16:18:57 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &Dog);
        virtual ~Dog();

        Dog &operator=(const Dog &c);

		virtual void	makeSound(void)const;
};

#endif