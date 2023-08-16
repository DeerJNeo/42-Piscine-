#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// int	main(void)
// {
// 	ft_isascii('c');

// 	printf("%d", ft_isascii('c'));
// }


int main(void)
{
    int n = 12345;
    int fd = 1; // Standardní výstup
    char c = 'A';

    ft_putnbr_fd(n, fd);
    write(fd, "\n", 1); // Nový řádek pomocí write

    ft_putchar_fd(c, fd);
    write(fd, "\n", 1); // Nový řádek pomocí write

    return 0;
}