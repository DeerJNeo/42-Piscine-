/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:30:22 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/18 13:13:54 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
		{
			return ((char *)s);
			s++;
		}
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}
