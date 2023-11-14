/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:33:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/13 20:33:42 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	error_message()
{
	std::cout << "this field can't be empty" << std::endl;
}

//initializatlion list
PhoneBook::PhoneBook():index(0) ,nb_cnt(0)
{}
PhoneBook::~PhoneBook()
{}

void	PhoneBook::Add_contact()
{
	Contact newcontact;
	std::string Fname, Lname, Nkname, Number, Secret;

	do{
		std::cout << "Entre the First Name : ";
		if (!std::getline(std::cin, Fname))
			exit(1);
		if (Fname.empty())
			error_message();
	} while (Fname.empty());
	newcontact.setFistName(Fname);
	do{
		std::cout << "Entre the Last Name : ";
		if (!std::getline(std::cin, Lname))
			exit(1);
		if (Lname.empty())
			error_message();
	} while (Lname.empty());
	newcontact.setLastName(Lname);
	do{
		std::cout << "Entre the NickName : ";
		if (!std::getline(std::cin, Nkname))
			exit(1);
		if (Nkname.empty())
			error_message();
	} while (Nkname.empty());
	newcontact.setNickName(Nkname);
	do{
		std::cout << "Entre the PhoneNum : ";
		if (!std::getline(std::cin, Number))
			exit(1);
		if (Number.empty())
			error_message();
	} while (Number.empty());
	newcontact.setPhoneNum(Number);
	do{
		std::cout << "Entre the DarkSecret : ";
		if (!std::getline(std::cin, Secret))
			exit(1);
		if (Secret.empty())
			error_message();
	} while (Secret.empty());
	newcontact.setDarkSecret(Secret);
	if(index == 8)
	{
		nb_cnt = 7;
		// index = 0;
	}
	// if (index != 0)
	// 	nb_cnt = index;
	list[index % 8] = newcontact;
	index++;
}

std::string	truncated(std::string word)
{
	std::string	str;

	if (word.length() > 9)
	{
		str = word.substr(0, 9) + ".";
		return (str);
	}
	return (word);
}

void	PhoneBook::Search_contact()
{
	int	id = 0;
	int number;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << '|' << std::setw(10) << "id" 
			<< '|' << std::setw(10) << "FirstName" 
			<< '|' << std::setw(10) << "LastName" 
			<< '|' << std::setw(10) << "NickName" 
			<< '|' << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	// if (nb_cnt == 7)
	// 	number = nb_cnt;
	// else
	// 	number = index;
	// while (id <= number)
	while (id < 8 && !list[id].getFirstName().empty())
	{
		std::cout << '|' << std::setw(10) << id << '|';
		std::cout << std::setw(10) << truncated(list[id].getFirstName())  << '|';
		std::cout << std::setw(10) << truncated(list[id].getLastName()) << '|';
		std::cout << std::setw(10) << truncated(list[id].getNickName()) << '|' << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		id++;
	}
	std::string identity;
	std::cout << "choise the index of the entry to display : " ;
	if (!std::getline(std::cin, identity))
		exit(1);
	// 1) check if identity is number 2 ) convert if to int using atoi 
	number = std::atoi(identity.c_str());
	std::cout << number << std::endl;
	if (number >= 0 && number <= index)
	{
		std::cout << "FirstName : " << list[number].getFirstName() << std::endl;
		std::cout << "LastName : " << list[number].getLastName() << std::endl;
		std::cout << "NickName : " << list[number].getNickName() << std::endl;
		std::cout << "PhoneNum : " << list[number].getPhoneNum() << std::endl;
		std::cout << "DarkSecret : " << list[number].getDarkSecret() << std::endl;
	}
	else
		std::cout << "the index is out of range " << std::endl;

}