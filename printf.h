/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:00:54 by midbella          #+#    #+#             */
/*   Updated: 2023/11/30 12:03:51 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_c(char c);
int	ft_print_s(const char *str);
int	ft_print_p(void *type);
int	ft_print_d(int nb);
int	ft_print_u(unsigned int nb);
int	ft_print_lower_x(unsigned int nb);
int	ft_print_uper_X(unsigned int nb);
int	ft_printf(const char *format, ...);

#endif