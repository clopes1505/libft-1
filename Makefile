# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouston <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 14:39:17 by jhouston          #+#    #+#              #
#    Updated: 2019/06/04 15:12:04 by jhouston         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= gcc
FILES= ft_*.c
OBJ= ft_*.o
FLAGS= -Wall -Werror -Wextra
LIB= libft.h

all: $(NAME)

$(NAME):
	$(CC) -c $(FILES) $(FLAGS) -I $(LIB)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
