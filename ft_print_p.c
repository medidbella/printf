/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:34:12 by midbella          #+#    #+#             */
/*   Updated: 2023/11/30 00:43:49 by midbella         ###   ########.fr       */
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

	hex = "abcdef";
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

int	ft_print_p(void *adress)
{
	size_t		nb;
	int			index1;
	int			index2;
	char		str[13];
	int			tot;

	nb = (size_t)adress;
	index1 = 0;
	index2 = 0;
	write(1, "0x", 2);
	while (nb >= 16)
	{
		str[index1] = hex_helper(nb % 16);
		nb = nb / 16;
		index1++;
	}
	str[index1] = hex_helper(nb);
	while (index1 >= 0)
	{
		tot += write(1, &str[index1], 1);
		index1--;
	}
	return (tot);
}
int main()
{
	char c = 'a';
	ft_print_p(&c);
}