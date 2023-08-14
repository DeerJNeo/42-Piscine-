# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 13:26:47 by kjelinek          #+#    #+#              #
#    Updated: 2023/08/14 14:31:43 by kjelinek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c/
		ft_isdigit.c/
		ft_isamnum.c/
		ft_isascii.c/
		ft_isprint.c/
		ft_strlem.c/
		ft_memset.c/
		ft_bzero.c/
		ft_memcpy.c/
		ft_memmove.c/
		ft_strlcpy.c/
		ft_strlcat.c/
		ft_toupper.c/
		ft_tolower.c/
		ft_strchr.c/
		ft_strrchr.c/
		ft_strncmp.c/
		ft_memchr.c/
		ft_memcmp.c/
		ft_strnstr.c/
		ft_atoi.c/
		ft_substr.c/
		ft_strjoin.c/
		ft_strtrim.c/
		ft_split.c/
		ft_itoa.c/
		ft_strmapi.c/
		ft_striteri.c/
		ft_putchar_fd.c/
		ft_putstr_fd./
		ft_putendl_fd.c/
		ft_putnbr_fd.c/

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): 
gcc $(FLAGS) -c $(SRCS) -I./
ar rc $(NAME) $(OBJS)

fclean: clean
rm -f $(NAME)

all: $(NAME)

clean: rm -f $(OBJS)

fclean: clean rm -f$(NAME)

re: fclean all