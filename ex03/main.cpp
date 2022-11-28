/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:37:16 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 02:52:34 by fnichola         ###   ########.fr       */
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

    HumanB jim("Jim");
    jim.SetWeapon(club);
    jim.Attack();
    club.SetType("some other type of club");
    jim.Attack();
  }
  return (0);
}
