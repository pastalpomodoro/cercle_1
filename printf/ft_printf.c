/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <tgastelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:40:19 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/14 17:39:45 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	if_c_good(char c)
{
	int		i;
	char	*tab;

	tab = "cspdiuxX%m";
	i = 0;
	while (tab[i])
	{
		if (tab[i] == c)
			return (1);
		i++;
	}
	return (-1);
}

int	check_type(const char *type)
{
	int	i;

	i = 0;
	while (type[i])
	{
		if (type[i] == '%' && if_c_good(type[i++]) == -1)
			return (0);
		i++;
	}
	return (1);
}

int	if_statement(char tab, va_list as)
{
	size_t	num;

	num = 0;
	if (tab == 'c')
		num = ft_putchar(va_arg(as, int));
	else if (tab == 'i' || tab == 'd')
		num = ft_putnbr_id(va_arg(as, int));
	else if (tab == 's')
		num = ft_putstr(va_arg(as, char *));
	else if (tab == 'u')
		num = ft_putnbr_u(va_arg(as, unsigned int));
	else if (tab == 'x')
		num = ft_putnbr_exa(va_arg(as, unsigned int), "0123456789abcdef");
	else if (tab == 'X')
		num = ft_putnbr_exa(va_arg(as, unsigned int), "0123456789ABCDEF");
	else if (tab == 'p')
		num = ft_addr(va_arg(as, unsigned long));
	else if (tab == '%')
		num = write(1, "%", 1);
	else if (tab == 'm')
		num = write(1, "Success", 7);
	return (num);
}

int	ft_printf(const char *type, ...)
{
	va_list	as;
	size_t	j;
	int		num_car;

	num_car = 0;
	j = -1;
	if (check_type(type) == 0)
		return (0);
	va_start(as, type);
	while (j++, type[j])
	{
		if (type[j] == '%' && if_c_good(type[j + 1]) == 1)
		{
			num_car += if_statement(type[j + 1], as);
			j++;
		}
		else
			num_car += write(1, &type[j], 1);
	}
	va_end(as);
	return (num_car);
}
