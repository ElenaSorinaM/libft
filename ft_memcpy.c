/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:34:37 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 11:31:24 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (dest == src || !n)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*void *ft_memcpy(void *dest, const void *src, size_t n);

int main() {
    char source[] = "Hello, World!";
	char destination[20];
	ft_memcpy(destination, source, strlen(source) + 1);

    printf("Contenuto della destinazione: %s\n", destination);

    return 0;
}*/
