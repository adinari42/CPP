/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinari <adinari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:47:05 by adinari           #+#    #+#             */
/*   Updated: 2023/01/27 22:29:08 by adinari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include "PhoneBook.hpp"

const int num = 8;

class PhoneBook {
	private:
		Contact	contacts[num];
		int		i;
		int		curr_n;

	public:
		PhoneBook(void);
		bool is_number(std::string s);
		void AddContact(void);
		void search(void);
};

#endif