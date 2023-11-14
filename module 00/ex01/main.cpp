/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:32:50 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/13 20:32:50 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

// void    program_guide(void)
// {

// }

int main()
{
	PhoneBook   book;
	Contact		info;

	while (1337)
	{
		std::string command;
		// program_guide();
		std::cout << "PhonBook > ";
		// std::getline(std::cin, command);
		if (!std::getline(std::cin, command))
			exit(1);
		if (command == "ADD")
			book.Add_contact();
		else if (command == "SEARCH")
		    book.Search_contact();
		// else if (command == "EXIT")
		//     book.Exit_contact();

	}
}