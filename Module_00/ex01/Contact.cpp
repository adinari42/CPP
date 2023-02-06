/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinari <adinari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:20:29 by adinari           #+#    #+#             */
/*   Updated: 2023/01/27 22:00:47 by adinari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void	Contact::AddDetails(void)
{
	std::cout << "first name:\n";
	std::getline (std::cin,first_name);
	std::cout << "last name:\n";
	std::getline (std::cin,last_name);
	std::cout << "nickname:\n";
	std::getline (std::cin,nickname);
	std::cout << "phone number:\n";
	std::getline (std::cin,phone_number);
	std::cout << "darkest secret:\n";
	std::getline (std::cin,darkes_secret);
}

void	Contact::displayDetails(int j)
{
	std::cout << std::setw(10) << j << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".|";
	else	
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << this->nickname << std::endl;
}

void	Contact::displayIndex(void)
{
	std::cout << "first name : " << this->first_name << std::endl;
	std::cout << "last name : " << this->last_name << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phone number : " << this->phone_number << std::endl;
	std::cout << "darkest secret : "<< this->darkes_secret << std::endl;
}
