/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:00:54 by midbella          #+#    #+#             */
/*   Updated: 2023/11/30 12:31:03 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_c(char c);
int	ft_print_s(const char *str);
int	ft_print_p(void *type);
int	ft_print_d(int nb);
int	ft_print_u(unsigned int nb);
int	ft_print_lower_x(unsigned int nb);
int	ft_print_uper_x(unsigned int nb);
int	ft_printf(const char *format, ...);

#endif