/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:05:09 by elmanea           #+#    #+#             */
/*   Updated: 2023/10/18 22:17:47 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
 * #include <fcntl.h>
int	main()
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_WRONLY, 0666);
	ft_putchar_fd('H', fd);
	close(fd);
	return (0);
}
*/
