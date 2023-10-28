/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:43:01 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/18 22:06:30 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void trasforma_carattere(unsigned int posizione, char *carattere) {
    if (*carattere >= 'a' && *carattere <= 'z') {
        // Trasforma caratteri minuscoli in maiuscoli
        *carattere = *carattere - 32;
    }
}

int main() {
    char stringa[] = "hello world";

    printf("Stringa originale: %s\n", stringa);

    ft_striteri(stringa, trasforma_carattere);

    printf("Stringa trasformata: %s\n", stringa);

    return 0;
}
*/
