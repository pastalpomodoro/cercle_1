/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:27:58 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/17 20:23:19 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	while (size > 0)
	{
		if (str[size] == (unsigned char)c)
			return ((char *) &str[size]);
		size--;
	}
	if (str[size] == (unsigned char)c)
		return ((char *) &str[size]);
	return (NULL);
}
