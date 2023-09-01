/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:48 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 16:10:06 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cat.hpp"
#include "../lib/Animal.hpp"
#include "../lib/Dog.hpp"
#include "../lib/WrongAnimal.hpp"
#include "../lib/WrongCat.hpp"
#include "../lib/Brain.hpp"

int main()
{
	const Animal	*anim[10];
	
	for (int i = 0 ; i < 10 ; i++)
	{
		for (i = 0 ; i < 5 ; i++)
			anim[i] = new Cat();
		for (i = 5 ; i < 10 ; i++)
		anim[i] = new Dog();
	}
		
	for (int i = 0 ; i < 10 ; i++)
		delete anim[i];

	/*std::cout << std::endl << BOLD "--------------------------------" << std::endl;
	std::cout << "     TEST DEEP COPY DOG " << std::endl;
	std::cout << "--------------------------------" DEFAULT << std::endl << std::endl;
	const Dog basic;
	{
		Dog tmp = basic;
	}

	std::cout << std::endl << BOLD "--------------------------------" << std::endl;
	std::cout << "     TEST DEEP COPY CAT " << std::endl;
	std::cout << "--------------------------------" DEFAULT << std::endl << std::endl;
	
	Cat acid;
	Cat tempo;

	tempo = acid;*/

	return(0);
}