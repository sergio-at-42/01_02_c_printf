/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:05:41 by Serge             #+#    #+#             */
/*   Updated: 2025/12/01 12:12:43 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	pourcent(char format, va_list ap)
{
	size_t	nb_char;

	nb_char = 0;
	if (format == 'c')
		nb_char = ft_arg_char(ap);
	else if (format == 's')
		nb_char = ft_arg_str(ap);
	else if (format == 'p')
		nb_char = ft_arg_pt(ap);
	else if (format == 'd' || format == 'i')
		nb_char = ft_arg_int(ap);
	else if (format == 'u')
		nb_char = ft_arg_uint(ap);
	else if (format == 'x')
		nb_char = ft_arg_hexalo(ap);
	else if (format == 'X')
		nb_char = ft_arg_hexaup(ap);
	else if (format == '%')
		nb_char = write(1, "%", 1);
	return (nb_char);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	nb_char;
	va_list	ap;

	va_start(ap, format);
	nb_char = 0;
	if (format)
	{
		i = 0;
		while (format[i])
		{
			if (format[i] != '%')
				nb_char += write(1, &format[i], 1);
			else
			{
				i++;
				nb_char += pourcent(format[i], ap);
			}
			i++;
		}
	}
	va_end(ap);
	return (nb_char);
}
