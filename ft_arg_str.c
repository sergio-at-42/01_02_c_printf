/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:08:44 by Serge             #+#    #+#             */
/*   Updated: 2025/11/30 16:38:37 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_arg_str(va_list	ap)
{
	char	*s;
	size_t	size;
	size_t	size_max;

	s = (char *)va_arg(ap, char *);
	size_max = -1;
	size = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[size] && size < size_max)
		size++;
	return (write(1, s, size));
}
