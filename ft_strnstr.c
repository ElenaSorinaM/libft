/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:29:50 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:24:09 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*Questa funzione è utilizzata per cercare una sottostringa (needle) 
 * all'interno di una stringa più grande (haystack) 
 * con un limite di lunghezza (len)
 * */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	while (*haystack && n_len <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, n_len)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main() {
    const char *haystack = "Questa è una prova di ricerca di sottostringa";
    const char *needle = "prova";
    size_t len = 30;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Sottostringa trovata a partire dalla posizione: 
		%ld\n", result - haystack);
    } else {
        printf("Sottostringa non trovata.\n");
    }

    return 0;
}
*/
