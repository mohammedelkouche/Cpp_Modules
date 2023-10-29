#include "phonebook.hpp"
#include "Contact.hpp"

void	error_message()
{
	std::cout << "this field can't be empty" << std::endl;
}

void	PhoneBook::Add_contact()
{
	Contact contact;
	std::string Fname, Lname, Nkname, Number, Secret;
	do{
		std::cout << "Entre the First Name : ";
		if (!std::getline(std::cin, Fname))
			exit(1);
		if (Fname.empty())
			error_message();
	} while (Fname.empty());
	contact.setFistName(Fname);
	do{
		std::cout << "Entre the Last Name : ";
		if (!std::getline(std::cin, Lname))
			exit(1);
		if (Lname.empty())
			error_message();
	} while (Lname.empty());
	contact.setLastName(Lname);

	do{
		std::cout << "Entre the NickName : ";
		if (!std::getline(std::cin, Nkname))
			exit(1);
		if (Nkname.empty())
			error_message();
	} while (Nkname.empty());
	contact.setNickName(Nkname);

	do{
		std::cout << "Entre the PhoneNum : ";
		if (!std::getline(std::cin, Number))
			exit(1);
		if (Number.empty())
			error_message();
	} while (Number.empty());
	contact.setPhoneNum(Number);
	do{
		std::cout << "Entre the DarkSecret : ";
		if (!std::getline(std::cin, Secret))
			exit(1);
		if (Secret.empty())
			error_message();
	} while (Secret.empty());
	contact.setDarkSecret(Secret);
}