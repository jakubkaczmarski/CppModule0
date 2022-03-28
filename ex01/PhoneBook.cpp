/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:10:30 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/03/28 15:47:43 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_first_name(std::string first_name)
{
    first_name_ = first_name;
}
void PhoneBook::set_last_name(std::string last_name)
{
    last_name_ = last_name;
}
void PhoneBook::set_nickname(std::string nickname)
{
    nickname_ = nickname;
}
void PhoneBook::set_phone_num(std::string phone_num)
{
    phone_num_ = phone_num;
}
void PhoneBook::set_secret(std::string darkest_secret)
{
    darkest_secret_ = darkest_secret;
}
PhoneBook::PhoneBook(){
    index_ = 0;
}
int PhoneBook::add_contact()
{
    if(first_name_ == "" || last_name_ == "" || nickname_ == "" || phone_num_ == "" || darkest_secret_ == "")
        return 0;
    contact_[index_].add_contact(first_name_, last_name_, nickname_, phone_num_, darkest_secret_);
    index_++; 
    return 1;
}

void Contact::add_contact(std::string f_name, std::string l_name, std::string nick_name,std::string phone_num, std::string darkest_secret)
{
    first_name_ = f_name;
    last_name_ = l_name;
    nickname_ = nick_name;
    phone_num_ = phone_num;
    darkest_secret_ = darkest_secret;
}

int PhoneBook::get_index()
{
    return index_;
}