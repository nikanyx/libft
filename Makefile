# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 20:40:28 by cmachado          #+#    #+#              #
#    Updated: 2022/02/23 21:20:44 by cmachado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

all: $(NAME)

$(NAME):
	gcc -o $(NAME) *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all