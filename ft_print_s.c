/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:26:25 by midbella          #+#    #+#             */
/*   Updated: 2023/11/30 12:21:40 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(const char *str)
{
	int	i;
	int	tot;

	tot = 0;
	i = 0;
	while (str[i])
	{
		tot += write (1, &str[i], 1);
		i++;
	}
	return (tot);
}
