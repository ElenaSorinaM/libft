/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:36:17 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 11:28:41 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!n || dest == src)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}

/*
 void *ft_memmove(void *dest, const void *src, size_t n);

int main() {
    char data[] = "Hello, World!";
	char buffer[20];
    ft_memmove(buffer, data, 5);

    printf("Contenuto della destinazione: %s\n", buffer);

    return 0;
}
*/
