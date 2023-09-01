/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:13 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 12:16:46 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define BOLD "\001\033[1;89m\002"
# define GREEN "\001\033[1;92m\002"
# define BLUE "\001\033[1;36m\002"

class AAnimal
{
    public:
        AAnimal();
        AAnimal(std::string name);
        AAnimal(AAnimal const &Animal);
        virtual ~AAnimal();

        AAnimal &operator=(AAnimal const &c);

		std::string     getType(void) const;
		virtual void    makeSound(void) const = 0;
	
	protected:
		std::string _type;
};

#endif