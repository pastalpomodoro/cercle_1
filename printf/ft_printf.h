/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:41:00 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/14 16:44:41 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdlib.h>
# include<stdarg.h>

int	ft_putchar(const char c);
int	ft_putstr(const char *str);
int	ft_putnbr_id(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr_exa(unsigned int n, char *exa);
int	ft_addr(unsigned long var);
int	ft_printf(const char *type, ...);

#endif
