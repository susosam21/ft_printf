# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 13:32:43 by samohamm          #+#    #+#              #
#    Updated: 2023/02/05 18:52:33 by samohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRC = 	ft_printf.c\
		format.c\
		ft_putchar.c\ 
		ft_putstr.c\
		ft_put_ptr.c\
		ft_putnbr.c\
		ft_put_unsignd.c\
		ft_put_hex.c\
		
OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

