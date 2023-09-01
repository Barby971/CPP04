/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:48 by blefebvr          #+#    #+#             */
/*   Updated: 2023/09/01 16:17:53 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cat.hpp"
#include "../lib/Animal.hpp"
#include "../lib/Dog.hpp"
#include "../lib/WrongAnimal.hpp"
#include "../lib/WrongCat.hpp"

int main()
{
	const Animal	*anim = new Animal();
	const Animal	*d = new Dog();
	const Animal	*c = new Cat();
	
	std::cout << std::endl << BOLD "--------------------------------" << std::endl;
	std::cout << "  TEST RIGHT ANIMALS " << std::endl;
	std::cout << "--------------------------------" DEFAULT<< std::endl << std::endl;
	
	std::cout << d->getType() << std::endl;
	std::cout << c->getType() << std::endl;
	d->makeSound();
	c->makeSound();
	anim->makeSound();

	const WrongAnimal	*Wanim = new WrongAnimal();
	const WrongAnimal	*Wcat = new WrongCat();
	
	std::cout << std::endl << BOLD "--------------------------------" << std::endl;
	std::cout << "  TEST WRONG ANIMALS " << std::endl;
	std::cout << "--------------------------------" DEFAULT << std::endl << std::endl;
	std::cout << Wanim->getType() << " " << std::endl;
	std::cout << Wcat->getType() << " " << std::endl;
	Wanim->makeSound();
	Wcat->makeSound();
	
	delete c;
	delete d;
	delete anim;
	delete Wcat;
	delete Wanim;
	
	return(0);
}