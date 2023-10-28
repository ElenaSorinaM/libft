/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:41:03 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:51:34 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len);

int main() {
    const char *original = "Esempio di stringa da cui estrarre una sottostringa";
    unsigned int start_position = 10;
    size_t length = 6;

    char *substring = ft_substr(original, start_position, length);

    if (substring != NULL) {
        printf("Sottostringa estratta: %s\n", substring);
        free(substring);
		} else {
        printf("Errore nell'allocazione di memoria per la sottostringa.\n");
    }

    return 0;
}

*/
