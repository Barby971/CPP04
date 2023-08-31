/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:25 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 19:09:08 by blefebvr         ###   ########.fr       */
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
        ~Dog();

        Dog &operator=(const Dog &c);

		virtual void	makeSound(void)const;
};

#endif