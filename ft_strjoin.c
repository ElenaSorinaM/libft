/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:07:12 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:55:04 by elmanea          ###   ########.fr       */
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

/*
 *
int main() {
    const char *string1 = "Prima parte della stringa";
    const char *string2 = " Seconda parte della stringa";

    char *concatenated = ft_strjoin(string1, string2);

    if (concatenated != NULL) {
        printf("Stringa concatenata: %s\n", concatenated);
        free(concatenated);
		} else {
        printf("Errore nell'allocazione di memoria per 
		la stringa concatenata.\n");
    }

    return 0;
}*/
