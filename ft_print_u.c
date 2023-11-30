/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:58:16 by midbella          #+#    #+#             */
/*   Updated: 2023/11/30 00:46:01 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_print_u(unsigned int nb)
{
	unsigned long	n;
	char			s[10];
	int				j;
	int				tot;

	tot = 0;
	n = nb;
	if (n < 0)
	{
		tot += write(1, "-", 1);
			n = n * -1;
	}
	j = 0;
	while (n >= 10)
	{
		s[j] = (n % 10) + 48;
		n = n / 10;
		j++;
	}
	s[j] = n + 48;
	while (j >= 0)
	{
		tot += write(1, &s[j], 1);
		j--;
	}
	result (tot);
}
