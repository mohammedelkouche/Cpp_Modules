#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private	:
		Contact list[8];
		int	index;

	public	:
		PhoneBook();
		void	Add_contact();
		void	Search_contact();
		void	Exit_contact();
};

#endif