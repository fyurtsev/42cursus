/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:13:20 by fyurtsev          #+#    #+#             */
/*   Updated: 2022/02/15 10:13:21 by fyurtsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pts;
	unsigned char	cc;

	pts = (void *)s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if ((pts[i] - cc) == 0)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// bir stringdeki bir kelimenin bellekteki değerini döndürür
