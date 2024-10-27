/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 15:44:26 by amarouf           #+#    #+#             */
/*   Updated: 2024-10-23 15:44:26 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONE_BOOK
#define PHONE_BOOK
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <unistd.h>


class Contact
{
    public:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phone_nbr;
    std::string secret;
    int         index;
};

#endif