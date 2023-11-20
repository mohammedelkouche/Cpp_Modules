/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:26:11 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/19 23:41:21 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl;
	harl.comlain("debug")
	std::cout << endl;
	harl.comlain("info")
	std::cout << endl;
	harl.comlain("warning")
	std::cout << endl;
	harl.comlain("error")
	std::cout << endl;
	return(0);
};