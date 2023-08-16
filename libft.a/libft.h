#ifndef LIBFT_H
# define LIBFT_H
# define size_t unsigned int

int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif