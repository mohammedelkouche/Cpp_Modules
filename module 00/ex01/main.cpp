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
		// std::cout << info.getFirstName() << std::endl;
		// std::cout << "test" << std::endl;
		// 	std::cout << info.getFirstName();
		// else if (command == "SEARCH")
		//     book.Search_contact();
		// else if (command == "EXIT")
		//     book.Exit_contact();

	}
}