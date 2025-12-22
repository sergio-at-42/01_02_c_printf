/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:03:10 by Serge             #+#    #+#             */
/*   Updated: 2025/11/30 19:37:44 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_write_digit(unsigned int n)
{
	size_t	nb_char;
	char	c;

	nb_char = 0;
	if (n / 10 != 0)
		nb_char += ft_write_digit(n / 10);
	c = (48 + n % 10);
	return (nb_char + write(1, &c, 1));
}

size_t	ft_arg_uint(va_list	ap)
{
	unsigned int	n;

	n = (unsigned int)va_arg(ap, unsigned int);
	return (ft_write_digit(n));
}
