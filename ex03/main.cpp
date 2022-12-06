/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:37:16 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 03:05:23 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void) {
  {
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.Attack();
    club.SetType("some other type of club");
    bob.Attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    Weapon club2 = Weapon("nailbat");

    HumanB jim("Jim");
    jim.Attack();
    jim.SetWeapon(club);
    jim.Attack();
    jim.SetWeapon(club2);
    club.SetType("some other type of club");
    jim.Attack();
  }
  return (0);
}
