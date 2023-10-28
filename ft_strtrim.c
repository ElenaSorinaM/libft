/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:47:01 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/18 19:40:20 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

/*
char *ft_strtrim(char const *s1, char const *set);

int main() {
    const char *inputString = "   Questo è un esempio di stringa da trimmare   ";
    
    const char *set = " ";

    char *trimmedString = ft_strtrim(inputString, set);


    if (trimmedString != NULL) {
        printf("Stringa originale: \"%s\"\n", inputString);
        printf("Stringa trimmata: \"%s\"\n", trimmedString);

        free(trimmedString);
    } else {
        printf("Errore: input non valido o allocazione di memoria fallita.\n");
    }

    return 0;
}

*/
