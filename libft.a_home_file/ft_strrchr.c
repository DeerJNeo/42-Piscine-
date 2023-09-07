/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:13:09 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/30 13:11:05 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	char	*lastpointer;

	if (!s)
		return (NULL);
	pointer = (char *)s;
	lastpointer = 0;
	while (*pointer)
	{
		if (*pointer == (char)c)
			lastpointer = pointer;
		pointer++;
	}
	if (c == '\0')
		return ((char *)pointer);
	return (lastpointer);
}
