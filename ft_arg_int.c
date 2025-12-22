/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:57:31 by Serge             #+#    #+#             */
/*   Updated: 2025/12/01 11:57:35 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_write_mod(int n)
{
	size_t	nb_char;
	char	c;

	nb_char = 0;
	if (n / 10 != 0)
		nb_char += ft_write_mod(n / 10);
	if (n < 0)
		c = (48 - n % 10);
	else
		c = (48 + n % 10);
	return (nb_char + write(1, &c, 1));
}

size_t	ft_arg_int(va_list	ap)
{
	int		n;
	size_t	nb_char;

	nb_char = 0;
	n = (int)va_arg(ap, int);
	if (n < 0)
		nb_char += write(1, "-", 1);
	return (nb_char += ft_write_mod(n));
}
