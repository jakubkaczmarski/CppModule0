/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:55:40 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/03/28 15:48:56 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void announce_instruc()
{
    std::cout << "Enter one of the three commands" << std::endl;
    std::cout << "ADD   ||  SEARCH  || EXIT" << std::endl;
}

int main()
{
   
    PhoneBook phone_book;
    std::string command;
    announce_instruc();
    while(std::cin >> command)
    {
        if(command == "ADD")
        {
            while(true)
            {
                if(phone_book.get_index() == 8)
                {
                    std::cout << "Contact limit reached " << std::endl;
                    announce_instruc();
                    break;
                }
                std::cout << "Enter first name: " <<std::endl;
                std::cin >> command;
                phone_book.set_first_name(command);
                std::cout << "Enter last name: " << std::endl;
                std::cin >> command;
                phone_book.set_last_name(command);
                std::cout << "Enter nickname: " << std::endl;
                std::cin >> command;
                phone_book.set_nickname(command);
                std::cout << "Enter phone_num: " << std::endl;
                std::cin >> command;
                phone_book.set_phone_num(command);
                std::cout << "Enter secret: " << std::endl;
                std::cin >> command;
                phone_book.set_secret(command);
                if(phone_book.add_contact() == 1)
                {
                    std::cout << "Contact added :)" << std::endl;
                    announce_instruc();
                    break;           
                }
            }
        }else if(command == "SEARCH")
        {

        }else if(command == "EXIT")
        {
            break;
        }else{
            std::cout << "Wrong command try again :)" << std::endl;
        }
    }
   
}