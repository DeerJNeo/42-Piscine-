#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	ft_isascii('c');

	printf("%d", ft_isascii('c'));
}

int main() {
    const char *numberStr = "12345";

    int number = ft_atoi(numberStr);

    printf("Převedené číslo 1: %d\n", number);

    return 0;
}