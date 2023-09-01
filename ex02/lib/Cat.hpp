/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:19 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 12:26:29 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &Cat);
        virtual ~Cat();

        Cat &operator=(const Cat &c);

		virtual void	makeSound(void)const;
        
    private:
        Brain   *_brain;
};

#endif