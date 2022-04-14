/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:13:29 by fyurtsev          #+#    #+#             */
/*   Updated: 2022/02/16 10:26:43 by fyurtsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
	i++;
	}
	return (us1[i] - us2[i]);
}

// bellekte belirlenen 2 stringi n kadar karsilastirir
// eğer fark görürse farkını alıp döndürür aynıysa 0 döndürür
//sondak döngüde NULL karakteri almamasi için -1 dedik
