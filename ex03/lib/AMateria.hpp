/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:38:54 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 15:09:58 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(std::string type);
		AMateria(AMateria const &c);
		virtual ~AMateria();
		
		AMateria &operator=(AMateria const &c);
		
		std::string	const &getType(void) const; //Returns the materia type
		virtual 	AMateria* clone(void) const = 0; //fonction pure
		virtual 	void use(ICharacter &target);
		
	protected:
		std::string	_type;
	
	private:		
};

#endif