/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinari <adinari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:25:03 by adinari           #+#    #+#             */
/*   Updated: 2023/01/27 22:31:04 by adinari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	curr_n = 0;
}

bool PhoneBook::is_number(std::string s)
{
	int i = 0;

    while (s[i])
	{
		if (!std::isdigit(s[i]))
			return false;
		i++;
	}
    return true;
}

void PhoneBook::AddContact(void)
{
	std::cout << "* enter details of contact[" << i << "]*\n";
	if (curr_n == num && i == num)
		i = 0;
	contacts[i].AddDetails();
	i++;
	if (curr_n < num)
		curr_n = i;
	std::cout << "curr_n :" << curr_n << std::endl;
}

void PhoneBook::search(void)
{
	int j = 0;
	std::string index;

	std::cout << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME" <<  "|" << std::setw(10) << "LAST NAME" << "|" << std::setw(10) << "NICKNAME" << std::endl;
	while (j < curr_n)
	{
		contacts[j].displayDetails(j);
		j++;
	}
	std::cout << "input the index of entry to display details: " << std::endl;
	std::getline (std::cin, index);
	if (is_number(index))
		j = std::stoi(index);
	else
		std::cout << "input is not a number!" << std::endl;

	
	if (j < curr_n && j >= 0)
		contacts[j].displayIndex();
	else
		std::cout << "index doesn't exist!" << std::endl;

	std::cout << "curr_n :" << curr_n << std::endl;
}
