# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 13:26:47 by kjelinek          #+#    #+#              #
#    Updated: 2023/08/15 15:47:11 by kjelinek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
RM = rm -f

SRC =	ft_strlen.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_bzero.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_putchar_fd.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c\
OBJ = $(SRC:%.c=%.o)
LIB = libft.a
HEADER = libft.h


all: libft.a

libft.a : $(OBJ)
	$(AR) -rcs $@ $(OBJ)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -I$(HEADER) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: fclean all

.PHONY: all clean fclean re