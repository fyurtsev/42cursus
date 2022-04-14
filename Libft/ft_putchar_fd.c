/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyurtsev <fyurtsev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:13:54 by fyurtsev          #+#    #+#             */
/*   Updated: 2022/02/16 11:16:16 by fyurtsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//fd ile yazdırıyoruz write 1 ile yazmamızın nedeni fd de 1 
//writeO anlamına geliyor 0 koyarsak sadece readO 2 hata kodu yazdırıyor
