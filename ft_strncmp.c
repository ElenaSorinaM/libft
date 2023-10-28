/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:16:11 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:10:31 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*int ft_strncmp(const char *s1, const char *s2, size_t n);

int main() {
    const char *string1 = "Hello, World!";
    const char *string2 = "Hello, Coder!";
    int n = 7;

    int result = ft_strncmp(string1, string2, n);

    printf("Risultato del confronto: %d\n", result);

    return 0;
}*/
