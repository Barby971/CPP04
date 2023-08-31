/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:33 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 16:09:05 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &wrongCat);
        ~WrongCat();

        WrongCat &operator=(const WrongCat &c);

		void	makeSound(void);

};

#endif