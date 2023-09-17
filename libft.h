/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmanea <elmanea@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:36:29 by elmanea           #+#    #+#             */
/*   Updated: 2023/09/15 18:29:44 by elmanea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

	/*typedef struct s_list
	{
		void			*content;
		struct s_list	*next;
	}				t_list;

	typedef struct s_split_next
	{
		size_t	start;
		size_t	length;
				t_split_next;
	}*/

	int		ft_isalnum(int c);
	int		ft_isalpha(int c);
	int		ft_isalpha(int c);
	int		ft_isascii(int c);
	int		ft_isdigit(int c);
	int		ft_isprint(int c);
	void	*ft_memset(void *b, int c, size_t len);
	size_t	ft_strlen(const char *s);
//void	bzero(void *s, size_t n);

#endif
