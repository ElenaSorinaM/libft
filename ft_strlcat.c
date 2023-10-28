/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:30:01 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 11:58:24 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l_dst;
	size_t	l_src;
	size_t	l_total;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	l_total = l_dst + l_src;
	if (dstsize <= l_dst)
		return (dstsize + l_src);
	if (dstsize > l_total)
		dstsize = l_total + 1;
	ft_strlcpy(dst + l_dst, src, dstsize - l_dst);
	return (l_total);
}

/*
 * size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

int main() {
    char destination[20] = "Hello, ";
	char source[] = "World!";
    size_t total_length = ft_strlcat(destination, source, sizeof(destination));

    printf("Contenuto della destinazione concatenata: %s\n", destination);
    printf("Lunghezza totale: %zu\n", total_length);

    return 0;
}
*/
