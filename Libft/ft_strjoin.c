/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:15:31 by fyurtsev          #+#    #+#             */
/*   Updated: 2022/02/16 10:55:21 by fyurtsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	j;
	char	*s3;

	index = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[index])
	{
		s3[index] = s1[index];
		index++;
	}
	while (s2[j])
	{
		s3[index++] = s2[j];
		j++;
	}
	s3[index] = '\0';
	return (s3);
}

//gelen dizeleri birleştirip tek bir dize haline dönüştürür
