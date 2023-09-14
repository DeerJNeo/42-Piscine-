# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: k <k@student.42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 16:51:21 by k                 #+#    #+#              #
#    Updated: 2023/09/13 17:11:10 by k                ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra - Werror
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@make clean -C $(LIBFT_DIR)
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re