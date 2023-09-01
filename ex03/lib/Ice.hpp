/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:13:45 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 15:39:29 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string type);
		Ice(Ice const &c);
		virtual ~Ice();
		
		Ice &operator=(Ice const &c);
		
		virtual 	AMateria *clone(void) const;
		virtual 	void use(ICharacter &target);
		
	private:
		std::string	_name;	
};

#endif