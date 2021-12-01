# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amajer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 19:53:43 by amajer            #+#    #+#              #
#    Updated: 2021/11/25 11:44:11 by amajer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FILES = *.c
O_FILES = *.o
NAME = libft.a

all:
	gcc -c -Wall -Wextra -Werror $(C_FILES) 
	ar rc $(NAME) $(O_FILES)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
