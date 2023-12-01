/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:58:26 by midbella          #+#    #+#             */
/*   Updated: 2023/12/01 17:17:34 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	print_helper(char spec, va_list ap)
{
	int	result;

	result = 0;
	if (spec == 'c')
		result += ft_print_c(va_arg(ap, int));
	else if (spec == 'd')
		result += ft_print_d(va_arg(ap, int));
	else if (spec == 's')
		result += ft_print_s(va_arg(ap, char *));
	else if (spec == 'x')
		result += ft_print_lower_x(va_arg(ap, int));
	else if (spec == 'i')
		result += ft_print_d(va_arg(ap, int));
	else if (spec == 'p')
		result += ft_print_p(va_arg(ap, void *));
	else if (spec == 'X')
		result += ft_print_uper_x(va_arg(ap, int));
	else if (spec == '%')
		result += ft_print_c('%');
	else if (spec == 'u')
		result += ft_print_u(va_arg(ap, int));
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		result;

	va_start(ap, format);
	result = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			result = result + print_helper(format[i + 1], ap);
			i++;
		}
		else
			result = result + write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (result);
}
