# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbester <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/14 14:02:29 by jbester           #+#    #+#              #
#    Updated: 2016/06/14 14:18:05 by jbester          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

NAME2 = libft/libft.a

SRCS = main.c sort.c

DIR = "libft"

FLAGS = -Wall -Werror -Wextra

$(NAME):
	make -C $(DIR)
	gcc -o $(NAME) $(SRCS) $(NAME2) $(FLAGS)

all: $(NAME)

clean:
	make clean -C $(DIR)

fclean:
	make fclean -C $(DIR)
	rm -f ft_ls

re: fclean all
