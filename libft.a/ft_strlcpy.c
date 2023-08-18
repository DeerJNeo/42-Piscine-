/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:00:23 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/18 09:06:06 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (1);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
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