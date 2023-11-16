/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:59:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/17 00:37:43 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie  *newarr = new Zombie[N];
    while (i < N)
    {
        newarr[i].set_name(name);
        i++;
    }
    return (newarr);
}