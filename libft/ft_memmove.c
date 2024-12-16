/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:11:04 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/14 15:44:12 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s)
		return (d);
	if (d < s)
		ft_memcpy(dest, src, n);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
