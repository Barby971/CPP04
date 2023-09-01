/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:28:11 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 16:26:38 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define BOLD "\001\033[1;89m\002"
# define GREEN "\001\033[1;92m\002"
# define BLUE "\001\033[1;36m\002"

class Brain
{
    public:
        Brain();
        Brain(std::string *ideas);
        Brain(Brain const &Brain);
        virtual ~Brain();

        Brain &operator=(Brain const &c);

	private:
		std::string _ideas[100];
};

#endif