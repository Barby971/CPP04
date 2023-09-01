/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:13 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 16:24:22 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define BOLD "\001\033[1;89m\002"
# define GREEN "\001\033[1;92m\002"
# define BLUE "\001\033[1;36m\002"

class Animal
{
    public:
        Animal();
        Animal(std::string name);
        Animal(Animal const &Animal);
        virtual ~Animal();

        Animal &operator=(Animal const &c);

		std::string     getType(void) const;
		virtual void    makeSound(void) const;
	
	protected:
		std::string _type;
};

#endif