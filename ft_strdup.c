/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:41:51 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:41:45 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}

/*
 char *ft_strdup(const char *s1);

int main() {
    const char *original = "Esempio di stringa da duplicare";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Stringa duplicata: %s\n", duplicate);
        free(duplicate); // Libera la memoria allocata
    } else {
        printf("Errore nell'allocazione di memoria per la duplicazione.\n");
    }

    return 0;
}
*/
