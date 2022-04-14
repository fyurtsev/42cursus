/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:05:55 by fyurtsev          #+#    #+#             */
/*   Updated: 2022/02/15 10:05:56 by fyurtsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *word, int latter, size_t length)
{
	size_t	index;
	char	*new_word;

	index = 0;
	new_word = (char *) word;
	while (index < length)
	{
		new_word[index] = latter;
		index++;
	}
	return (new_word);
}

// bellekte bir kelimede istenilen bir harfle istenilen uzunluk kadar
// yer degistirir
