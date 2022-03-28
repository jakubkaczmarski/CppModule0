# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:33:10 by jkaczmar          #+#    #+#              #
#    Updated: 2022/03/28 14:36:57 by jkaczmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: megaphone

megaphone:
	c++ -std=c++98 -Wall -Wextra -Werror -o megaphone megaphone.cpp
clean:
	@rm -f megaphone
fclean:
	@rm -f megaphone
re: fclean all

.PHONY: all clean fclean re