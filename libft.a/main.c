#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	ft_isascii('c');

	printf("%d", ft_isascii('c'));
}


int main(void)
{
    int n = 12345;
    int fd = 1; // Standardní výstup
    char c = 'A';

    ft_putnbr_fd(n, fd);
    write(fd, "\n", 1);

    ft_putchar_fd(c, fd);
    write(fd, "\n", 1);

    return 0;
}

int	main(void)
{
	ft_isdigit('c');
	printf("%i", ft_isdigit('c'));
}

int main()
{
    char c = 'A';
    int fd = 1;

    ft_putchar_fd(c, fd);

    return 0;
}

int main()
{
	char *str1;
	int	i;

	i = -1;
	str1 = "Hello world!";
	while (++i < 13)
		printf("memory position[%d]: %p\n", i, &str1[i]);

	printf("Searched: %p\n", ft_memchr(str1, 'e', 13));
	
	return 0;
}