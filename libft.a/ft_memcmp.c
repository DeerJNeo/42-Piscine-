/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:33:06 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/17 14:08:58 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = 0;
	ptr1 = (char *)p1;
	ptr2 = (char *)p2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
			i++;
		}
		return (0);
	}
}
