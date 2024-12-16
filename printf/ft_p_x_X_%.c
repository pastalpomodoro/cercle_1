/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_x_X_%.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:32:24 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/14 17:01:44 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_exa(unsigned int n, char *exa)
{
	size_t	size;

	size = 0;
	if (n > 15)
		size += ft_putnbr_exa(n / 16, exa);
	write(1, &exa[n % 16], 1);
	return (size + 1);
}

int	ft_putnbr_exa_p(unsigned long n, char *exa)
{
	int	count;

	count = 0;
	if (n > 15)
		count += ft_putnbr_exa_p(n / 16, exa);
	write(1, &exa[n % 16], 1);
	count++;
	return (count);
}

int	ft_addr(unsigned long var)
{
	int				count;

	if (!var)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	if (var > 0)
	{
		count += write(1, "0x", 2);
		count += ft_putnbr_exa_p(var, "0123456789abcdef");
		return (count);
	}
	return (0);
}
