/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:58:44 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/18 21:55:41 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (!s)
		return (0);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (0);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		++i;
	}
	ret[i] = 0;
	return (ret);
}

/*
#include <stdio.h>
#include <stdlib.h>

char transforma_carattere(unsigned int posizione, char carattere) {
    return carattere + 1; // Aggiunge 1 a ciascun carattere
}

int main() {
    const char *inputString = "Hello";
    char *risultato = ft_strmapi(inputString, transforma_carattere);

    if (risultato != NULL) {
        printf("Stringa di input: %s\n", inputString);
        printf("Stringa risultante: %s\n", risultato);
        free(risultato);
    } else {
        printf("Errore: Allocazione di memoria fallita.\n");
    }

    return 0;
}
*/
