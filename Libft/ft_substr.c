/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:16:42 by fyurtsev          #+#    #+#             */
/*   Updated: 2022/02/16 13:13:06 by fyurtsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*final;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
		i++;
	final = (char *) malloc((sizeof(char) * i) + 1);
		if (!(final))
			return (NULL);
	j = 0;
		while (j < i)
		{
			final[j] = s[start + j];
			j++;
		}
	final[j] = '\0';
		return (final);
	}
	return (NULL);
}

//dizede başlangıç indeksinden sonra kaç karakter alcağımızı belirtir
