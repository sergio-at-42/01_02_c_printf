/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_hexalo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:09:34 by Serge             #+#    #+#             */
/*   Updated: 2025/12/05 15:22:15 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static size_t	ft_write_hexalo(unsigned int n)
{
	size_t	nb_char;
	char	*c;

	c = "0123456789abcdef";
	nb_char = 0;
	if (n / 16 != 0)
		nb_char += ft_write_hexalo(n / 16);
// printf("%c", c[n % 16]);
	return (nb_char + write(1, &c[n % 16], 1));
}

size_t	ft_arg_hexalo(va_list ap)
{
	unsigned int	n;

	n = (unsigned int)va_arg(ap, unsigned int);
// printf("\n");
	return (ft_write_hexalo(n));
}
