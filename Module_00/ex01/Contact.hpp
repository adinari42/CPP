/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinari <adinari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:52:46 by adinari           #+#    #+#             */
/*   Updated: 2023/01/27 22:31:26 by adinari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_H
#define	CONTACT_H
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkes_secret;

	public:
		void	AddDetails(void);
		void	displayDetails(int j);
		void	displayIndex(void);
};

#endif