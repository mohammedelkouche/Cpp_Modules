#include "PhoneBook.hpp"

// void    program_guide(void)
// {

// }

int main()
{
    PhoneBook   book;

    while (1337)
    {
        std::string command;
        // program_guide();
        std::cout << "PhonBook > ";
        std::getline(std::cin, command);
        if (command == "ADD")
            book.Add_contact();
        // else if (command == "SEARCH")
        //     book.Search_contact();
        // else if (command == "EXIT")
        //     book.Exit_contact();

    }
}