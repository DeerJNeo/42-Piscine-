/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:11:20 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/25 14:29:17 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int count_strings(char const *s, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}

static  int str_sep_len(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

static  char    *str_sepdup(char const *s, char c)
{
    char    *word;
    int     i;
    int     len;

    i = 0;
    len = str_sep_len(s, c);
    word = (char *)malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **strings;
    int     i;

    i = 0;
    strings = (char **)malloc(sizeof(char *)
            * (count_strings(s, c) + 1));
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s)
            strings[i++] = str_sepdup(s, c);
        while (*s && *s != c)
            s++;
    }
    strings[i] = 0;
    return (strings);
}