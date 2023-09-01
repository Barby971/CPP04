/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:48 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 12:37:00 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cat.hpp"
#include "../lib/AAnimal.hpp"
#include "../lib/Dog.hpp"
#include "../lib/WrongAnimal.hpp"
#include "../lib/WrongCat.hpp"
#include "../lib/Brain.hpp"

int main()
{
	//const AAnimal	*anim = new AAnimal;
	const AAnimal	*d = new Dog();
	const AAnimal	*c = new Cat();
	
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	d->makeSound();
	c->makeSound();
	//anim->makeSound();
		
	delete c;
	delete d;
	//delete anim;

	std::cout << std::endl << BOLD "--------------------------------" << std::endl;
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

	tempo = acid;

	return(0);
}