/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:21:12 by elmanea           #+#    #+#             */
/*   Updated: 2023/09/17 13:03:52 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t	i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
