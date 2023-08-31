/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:27:48 by blefebvr          #+#    #+#             */
/*   Updated: 2023/08/31 16:29:40 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Cat.hpp"
#include "../lib/Dog.hpp"
#include "../lib/WrongAnimal.hpp"
#include "../lib/WrongCat.hpp"

int main()
{
	const Animal	*anim = new Animal();
	const Animal	*d = new Dog();
	const Animal	*c = new Cat();
	
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	d->makeSound();
	c->makeSound();
	anim->makeSound();

	const WrongAnimal	*Wanim = new WrongAnimal();
	const WrongAnimal	*Wcat = new WrongCat();
	
	Wanim->makeSound();
	Wcat->makeSound();
	
	delete anim, d, c, Wanim, Wcat;
	
	return(0);
}