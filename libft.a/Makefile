# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 13:26:47 by kjelinek          #+#    #+#              #
#    Updated: 2023/08/15 13:16:55 by kjelinek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
RM = rm -f

SRC = ft_strlen.c/
	  ft_isalpha.c/
	  ft_isdigit.c/
	  ft_isalnum.c/
	  ft_isascii.c/
	  ft_isprint.c/
	  ft_bzero.c/
	  ft_strlcat.c/
	  ft_strncpm.c/
	  
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