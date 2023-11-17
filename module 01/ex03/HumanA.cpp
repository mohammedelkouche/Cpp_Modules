/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:42:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/17 23:29:16 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

class	HumanA
{
	private	:
		std::string	name;
		Weapon &wp;
	public	:
		HumanA(std::string name, Weapon &firearm);
		~HumanA();
		void	attack(void);
};

#endif