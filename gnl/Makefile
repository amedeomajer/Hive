# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amajer <amajer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 13:27:12 by amajer            #+#    #+#              #
#    Updated: 2021/12/21 13:32:47 by amajer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -Wall -Wextra -Werror -L. -lft get_next_line.c
	./a.out
clean:
	rm -f $(O_FILES)
fclean: clean
	rm -f $(NAME)
re: fclean all