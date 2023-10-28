/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:22:57 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:17:44 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main() {
    unsigned char buffer[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int byte_to_find = 60;
    size_t buffer_size = sizeof(buffer);

    void *result = ft_memchr(buffer, byte_to_find, buffer_size);

    if (result != NULL) {
        printf("Byte %d trovato alla posizione %ld nel blocco di memoria.\n", 
		byte_to_find, (unsigned char *)result - buffer);
    } else {
        printf("Byte %d non trovato nel blocco di memoria.\n", byte_to_find);
    }

    return 0;
}
*/
