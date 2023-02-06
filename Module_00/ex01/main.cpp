/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinari <adinari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:02:38 by adinari           #+#    #+#             */
/*   Updated: 2023/01/27 22:03:05 by adinari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string input;

	std::cout << "\033[31menter command:\033[0m(ADD, SEARCH, EXIT)\n";
	while(std::getline (std::cin, input))
	{
		if (input == "ADD")
		{
			phonebook.AddContact();
		}
		else if (input == "SEARCH"){
			std::cout << "\033[36msearch result:\033[0m\n";
			phonebook.search();
		}
		else if (input == "EXIT")
			break;
		std::cout << "\033[31menter command:\033[0m(ADD, SEARCH, EXIT)\n";
	}
	return (0);
}	