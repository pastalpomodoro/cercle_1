/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <tgastelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:19:40 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/20 18:50:18 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*tab;

	tab = malloc(num * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, (num * size));
	return (tab);
}
