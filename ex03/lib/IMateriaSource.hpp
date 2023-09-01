/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:38:54 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 14:52:26 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource : public AMateria
{
	public:
		IMateriaSource();
		IMateriaSource(std::string type);
		IMateriaSource(IMateriaSource const &c);
		virtual ~IMateriaSource();

		IMateriaSource &operator=(IMateriaSource const &c);
		
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria 	*createMateria(std::string const & type) = 0;
};

#endif