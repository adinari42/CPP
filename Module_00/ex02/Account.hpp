/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinari <adinari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:36:08 by adinari           #+#    #+#             */
/*   Updated: 2023/01/17 14:48:14 by adinari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account{
   
        public:
             Account();
             Account(std::string fname, std::string sname, double balance); 
             std::string getName();
             std::string getFirstName();
             std::string getSurname();
             double getBalance();
             void lodge(double);
             double withdraw(double);
             void printDetails();

        private:
            double balance;
            std::string fname;
            std::string sname;
    
};

#endif