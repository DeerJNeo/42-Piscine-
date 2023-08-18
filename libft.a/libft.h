#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdio.h>
typedef unsigned long size_t;


int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *str);

#endif
