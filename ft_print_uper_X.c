/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uper_X.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:43:53 by midbella          #+#    #+#             */
/*   Updated: 2023/11/29 22:02:34 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static size_t	hex_helper(size_t nb)
{
	int		i;
	int		f;
	int		h;
	char	*hex;
	int		arr[6];

	hex = "ABCDEF";
	h = 10;
	f = 0;
	i = 0;
	while (h <= 15)
	{
		arr[f] = h;
		h++;
		f++;
	}
	if (nb >= 10)
	{
		while (nb != arr[i])
			i++;
		return (hex[i]);
	}
	else
		return (nb + 48);
}

void ft_print_uper_X(unsigned int nb)
{
	int			index1;
	int			index2;
	char		str[13];

	index1 = 0;
	index2 = 0;
	while (nb >= 16)
	{
		str[index1] = hex_helper(nb % 16);
		nb = nb / 16;
		index1++;
	}
	str[index1] = hex_helper(nb);
	while (index1 >= 0)
	{
		write(1, &str[index1], 1);
		index1--;
	}
}
