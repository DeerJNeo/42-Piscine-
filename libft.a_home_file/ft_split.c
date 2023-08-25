/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjelinek < kjelinek@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:11:20 by kjelinek          #+#    #+#             */
/*   Updated: 2023/08/25 12:24:21 by kjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_freeup(char **strs)

{
	int i;
	
	i = 0;
	while (strs[i] != NULL)
	{
		free(strs);
		i++;
	}
	free(strs);
}

static	int	ft_word_count(char *str, char c)

{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != '\0' && str[i] != c)
				i++;
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static	 void	ft_strcpy(char *word, char *str, char c, int j)

{
	int	i;
	
	i = 0;
	while (str[j] != '\0' && str[j] != c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static	void	ft_stralloc(char *str, char c, int *k)

{
	char	*word;
	int		j;

	j = *k;
	word = NULL;
	while (str[*k] != '\0' && str[*k] == c)
		*k += 1;
	while (str[*k] != '\0' && str[*k] != c)
		*k += 1;
	word = (char *)malloc(sizeof(char) * (*k - j + 1));
	if (word == NULL)
		return ;
	ft_strcpy(word, str, c, j);
	return ;
}

char	**ft_split(char const *str, char c)
{
	char	**strs;
	int	i;
	int	j;
	int	position;

	if (str == NULL)
		return NULL;

	i = 0;
	position = 0;
	j = ft_word_count((char *)str, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));	
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		ft_stralloc((char *)str, c, &position);
		if (strs[i] == NULL)
		{
			ft_freeup(strs);
			return NULL;
		}
		i++;
	}
	return (strs);	
}
