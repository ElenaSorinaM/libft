/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:26:44 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/15 12:20:16 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main() {
    unsigned char block1[] = {0, 10, 20, 30, 40};
    unsigned char block2[] = {0, 10, 20, 35, 45};
    size_t size = sizeof(block1);

    int result = ft_memcmp(block1, block2, size);

    if (result == 0) {
        printf("I blocchi di memoria sono uguali nei primi %zu byte.\n", 
		size);
    } else if (result < 0) {
        printf("Il primo byte diverso si trova nel 
		blocco1 alla posizione %ld.\n", 
		(unsigned char *)block1 - (unsigned char *)result);
    } else {
        printf("Il primo byte diverso si trova nel 
		blocco2 alla posizione %ld.\n", 
		(unsigned char *)block2 - (unsigned char *)result);
    }

    return 0;
}
*/
