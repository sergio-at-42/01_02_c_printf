/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:45:04 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/12/01 11:59:40 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
size_t	ft_arg_char(va_list ap);
size_t	ft_arg_str(va_list ap);
size_t	ft_arg_pt(va_list ap);
size_t	ft_arg_int(va_list ap);
size_t	ft_arg_uint(va_list ap);
size_t	ft_arg_hexalo(va_list ap);
size_t	ft_arg_hexaup(va_list ap);

#endif
