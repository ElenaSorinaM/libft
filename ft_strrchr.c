/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:28:21 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:04:59 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
  char *ft_strrchr(const char *s, int c);

int main() {
    const char *string = "Questo è un esempio di stringa";
    int character_to_find = 'è'; 
    char *result = ft_strrchr(string, character_to_find);

    if (result != NULL) {
        printf("Ultima occorrenza del carattere '%c' trovata alla posizione %ld 
		nella stringa.\n", character_to_find, result - string);
    } else {
        printf("Carattere '%c' non trovato nella stringa.\n", 
		character_to_find);
    }

    return 0;
}
*/
