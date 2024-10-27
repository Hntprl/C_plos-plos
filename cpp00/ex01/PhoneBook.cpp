/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 15:44:31 by amarouf           #+#    #+#             */
/*   Updated: 2024-10-23 15:44:31 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

void print_contact_info(Contact *contacts)
{
    int i = 0;

    while (contacts[i].index)
    {
        std::cout << contacts[i].index << '|';
        std::cout << contacts[i].l_name << '|';
        std::cout << contacts[i].f_name << '|';
        std::cout << contacts[i].n_name << '\n';
        i ++;
    }
}

void add_contact(Contact *contacts)
{
    static int index;

    if (index == 8)
        index = 0;
    std::cout << "First Name: ";
    std::cin >> contacts[index].f_name;
    std::cout << "Last Name: ";
    std::cin >> contacts[index].l_name;
    std::cout << "NickName: ";
    std::cin >> contacts[index].n_name;
    std::cout << "Phone Number: ";
    std::cin >> contacts[index].phone_nbr;
    std::cout << "Darckest Secret: ";
    std::cin >> contacts[index].secret;
    contacts[index].index = (index + 1);
    index ++;
}

void _menu()
{
    int i = 0;
    Contact contacts[8];

    while(i < 9)
    {
        contacts[i].index = 0;
        i ++;
    }
    std::string command;

    while (1)
    {
        std::cout << "===============MENU===============\n";
        std::cout << "= OPTIONS:                       =\n";
        std::cout << "= 1- ADD                         =\n";
        std::cout << "= 2- SEARCH                      =\n";
        std::cout << "= 3- EXIT                        =\n";
        std::cout << "==================================\n";
        std::cout << "Enter a Command: ";
        std::cin >> command;
        if (!strcmp(command.c_str(), "add"))
            add_contact(contacts);
        if (!strcmp(command.c_str(), "search"))
            print_contact_info(contacts);
        if (!strcmp(command.c_str(), "exit"))
            return;
    }
}

int main()
{
    _menu();
}