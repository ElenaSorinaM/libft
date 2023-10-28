/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:55:14 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 11:33:49 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l_src;

	l_src = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
	{
		return (l_src);
	}
	if (src != NULL && dst != NULL)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l_src);
}

/*size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main() {
    char source[] = "Hello, World!";  
    char destination[15];  
    size_t copied = ft_strlcpy(destination, source, sizeof(destination));
    printf("Contenuto della destinazione: %s\n", destination);
    printf("Lunghezza della stringa copiata: %zu\n", copied);

    return 0;
}*/

/*Il codice che hai fornito implementa una funzione chiamata ft_strlcpy. 
  Questa funzione è spesso utilizzata per copiare una stringa dalla sorgente 
  (src) alla destinazione (dst) con una 
  limitazione sulla dimensione massima (dstsize) 
  della destinazione, evitando il rischio di buffer overflow.*/
