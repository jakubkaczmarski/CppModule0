# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:33:10 by jkaczmar          #+#    #+#              #
#    Updated: 2022/03/28 14:36:51 by jkaczmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: phonebook

phonebook:
	c++ -std=c++98 -Wall -Wextra -Werror -o phonebook PhoneBook.cpp main.cpp
clean:
	@rm -f phonebook
fclean:
	@rm -f phonebook
re: fclean all

.PHONY: all clean fclean re