/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:05:57 by k                 #+#    #+#             */
/*   Updated: 2023/09/14 12:06:08 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	ft_printf_check(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), len);
}