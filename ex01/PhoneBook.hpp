/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:39:17 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/03/28 20:05:25 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <string>
class Contact{
    private:
        std::string first_name_;
        std::string last_name_;
        std::string nickname_;
        std::string phone_num_;
        std::string darkest_secret_;
    public:
        void add_contact(std::string f_name, std::string l_name, std::string nick_name,std::string phone_num_, std::string darkest_secret_ );
        void print_contact(int index);
};

class PhoneBook{
    private:
        Contact contact_ [8];
        int index_;
        std::string first_name_;
        std::string last_name_; 
        std::string nickname_ ;
        std::string phone_num_;
        std::string darkest_secret_;
    public:
        PhoneBook();
        int add_contact();
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string last_name);
        void set_phone_num(std::string phone_num);
        void set_secret(std::string darkest_secret);
        int get_index();
        int show_all();
};


#endif