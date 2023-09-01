/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:16:14 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 15:17:25 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		Cure(Cure const &c);
		virtual ~Cure();
		
		Cure &operator=(Cure const &c);
		
		virtual 	AMateria *clone(void) const;
		virtual 	void use(ICharacter &target);
		
	private:
		std::string	_name;	
};

#endif