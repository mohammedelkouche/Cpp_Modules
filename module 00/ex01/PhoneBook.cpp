#include "phonebook.hpp"
#include "Contact.hpp"

void	error_message()
{
	std::cout << "this field can't be empty" << std::endl;
}

//initialization list
PhoneBook::PhoneBook():index(0)
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
	// std::cout << newcontact.getFirstName() << std::endl;
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
	if(index == 7)
		index = 0;
	list[index % 8] = newcontact;
	index++;
}

// void	PhoneBook::Search_contact()
// {

// }