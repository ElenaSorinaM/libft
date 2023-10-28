/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:58:43 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:02:59 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*
char *ft_strchr(const char *s, int c);

int main() {
    const char *string = "Questo è un esempio di stringa";
    int character_to_find = 'è'; 
    char *result = ft_strchr(string, character_to_find);

    if (result != NULL) {
        printf("Carattere '%c' trovato alla posizione %ld nella stringa.\n", 
		character_to_find, result - string);
    } else {
        printf("Carattere '%c' non trovato nella stringa.\n", 
		character_to_find);
    }

    return 0;
}
*/
