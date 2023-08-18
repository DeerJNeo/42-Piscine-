#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    const char *str = "  -12345";
    int result = ft_atoi(str);

    printf("Parsed integer: %d\n", result);

    return 0;
}
