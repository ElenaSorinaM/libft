/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:39:16 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/18 22:33:16 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char const	*s;
	char		delimiter;
	char		**result;

	//s = "Esto es un string! ";
	s = NULL;
	delimiter = ' ';
	result = ft_split(s, delimiter);

	if (result != NULL)
	{
		for (int i = 0; result[i] != NULL; i++) 
		{
            printf("Palabra %d: %s\n", i, result[i]);
		}
		for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
	}
	else
	{
		printf("errorr");

	}
	return (0);
}*/
