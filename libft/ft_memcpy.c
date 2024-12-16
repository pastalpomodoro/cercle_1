/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:51:21 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/14 15:44:59 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*desttt;
	unsigned char	*srccc;
	size_t			i;

	if (dest == (void *)0 && src == (void *)0)
		return (NULL);
	srccc = (unsigned char *)src;
	desttt = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		desttt[i] = srccc[i];
		i++;
	}
	return (dest);
}
