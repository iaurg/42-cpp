/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:41:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/30 09:07:30 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
        DiamondTrap tom("Thomas");
        std::cout << "Thomas AD: " << tom.getAD() << std::endl;
        std::cout << "Thomas HP: " << tom.getHP() << std::endl;
        std::cout << "Thomas EP: " << tom.getEP() << std::endl;
    }

    std::cout << std::endl;
    {
        DiamondTrap norb("Norbert");

        norb.attack("Jeremy");
        norb.takeDamage(25);
        norb.takeDamage(18);
        norb.attack("Valerie");
        norb.attack("Cassie");
        norb.attack("Victor");
        norb.attack("Tristan");
        norb.beRepaired(40);
        norb.whoAmI();
        norb.attack("Killian");
        norb.highFivesGuys();
        norb.takeDamage(8);
        norb.attack("Dominic");
        norb.highFivesGuys();
    }
    return (0);
}
