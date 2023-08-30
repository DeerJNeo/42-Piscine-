/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:59:57 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/29 14:26:49 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	cpyl;

	dstl = ft_strlen(dest);
	srcl = ft_strlen(src);
	cpyl = size - dstl - 1;
	if (size <= dstl)
	{
		return (srcl + size);
	}
	ft_memcpy(dest + dstl, src, cpyl);
	dest[dstl + cpyl] = '\0';
	return (dstl + srcl);
}

// int main() {
//     char destination[20] = "Hello, ";
//     char source[] = "world!";
//     size_t result = ft_strlcat(destination, source, sizeof(destination));
//     printf("Spojený řetězec: %s\n", destination);
//     printf("Celková délka: %zu\n", result);
//     return 0;
// }