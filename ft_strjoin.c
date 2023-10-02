/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:07:12 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/01 21:10:16 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*hell;
	int		i;
	int		j;

	i = 0;
	j = 0;
	hell = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!hell)
	{
		return (NULL);
	}
	while (s1[i])
	{
		hell[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		hell[j++] = s2[i++];
	}
	hell[j] = '\0';
	return (hell);
}
