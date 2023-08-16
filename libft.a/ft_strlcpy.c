/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:00:23 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/16 14:39:04 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	if (!src)
	return (0);
	if ((int)size != 0)
	{
		i = 0;
		while (i < (int)size - 1 && *(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
		}
		
	}
	
}