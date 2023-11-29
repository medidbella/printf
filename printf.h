/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:00:54 by midbella          #+#    #+#             */
/*   Updated: 2023/11/29 19:58:26 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_print_c(char c);
void	ft_print_s(const char *str);
void	ft_print_p(void *type);
void	ft_print_d(int nb);
void	ft_print_i(int nb);
void	ft_print_u(unsigned int nb);
#endif