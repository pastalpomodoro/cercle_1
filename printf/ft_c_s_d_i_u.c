/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_s_d_i_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:34:59 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/14 17:06:25 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putchar(const char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int		i;
	size_t	size;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	size = 0;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		size++;
	}
	return (size);
}

int	ft_putnbr_id(int n)
{
	char	b;
	size_t	size;

	size = 0;
	if (n == -2147483648)
	{
		size += write(1, "-2147483648", 11);
		return (size);
	}
	if (n < 0)
	{
		size += write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		size += ft_putnbr_id(n / 10);
	b = n % 10 + '0';
	write(1, &b, 1);
	return (size + 1);
}

int	ft_putnbr_u(unsigned int n)
{
	char			b;
	unsigned int	num;
	size_t			size;

	size = 0;
	num = n;
	if (n == 0)
		size = 1;
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	if (n > 9)
		ft_putnbr_id(n / 10);
	b = n % 10 + '0';
	write(1, &b, 1);
	return (size);
}
