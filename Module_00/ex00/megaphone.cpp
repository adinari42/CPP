/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinari <adinari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:25:13 by adinari           #+#    #+#             */
/*   Updated: 2023/01/26 22:36:14 by adinari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>

int main(int argc, char **argv)
{
	std::string str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		int i = 1;
		while (i < argc)
		{
			str = argv[i];
			int j = 0;
			while (str[j])
			{
				if (std::isalpha(str[j]))
					std::cout << static_cast<char>(std::toupper(str[j]));
				else
					std::cout << str[j];
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}
