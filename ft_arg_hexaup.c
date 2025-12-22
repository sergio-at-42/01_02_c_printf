/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_hexaup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:06:58 by Serge             #+#    #+#             */
/*   Updated: 2025/11/30 19:41:57 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_write_hexaup(unsigned int n)
{
	size_t	nb_char;
	char	*c;

	c = "0123456789ABCDEF";
	nb_char = 0;
	if (n / 16 != 0)
		nb_char += ft_write_hexaup(n / 16);
	return (nb_char + write(1, &c[n % 16], 1));
}

size_t	ft_arg_hexaup(va_list ap)
{
	unsigned int	n;

	n = (unsigned int)va_arg(ap, unsigned int);
	return (ft_write_hexaup(n));
}
