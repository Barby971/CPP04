/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:37:07 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 15:39:13 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter :
{
	public:
		ICharacter();
		ICharacter(std::string type);
		ICharacter(ICharacter const &c);
		virtual ~ICharacter();

		ICharacter &operator=(ICharacter const &c);
		
		virtual std::string const 	&getName() const = 0;
		virtual void 				equip(AMateria* m) = 0;
		virtual void 				unequip(int idx) = 0;
		virtual void 				use(int idx, ICharacter& target) = 0;
};

#endif