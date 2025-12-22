/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_pt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:32:05 by Serge             #+#    #+#             */
/*   Updated: 2025/12/01 11:58:01 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_write_pt(size_t n)
{
	size_t	nb_char;
	char	*c;

	c = "0123456789abcdef";
	nb_char = 0;
	if (n / 16 != 0)
		nb_char += ft_write_pt(n / 16);
	return (nb_char + write(1, &c[n % 16], 1));
}

size_t	ft_arg_pt(va_list ap)
{
	size_t	n;

	n = (size_t)va_arg(ap, size_t);
	if (!n)
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2) + ft_write_pt(n));
}
