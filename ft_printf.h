/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:00:08 by samohamm          #+#    #+#             */
/*   Updated: 2023/02/12 20:04:43 by samohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include	<stdarg.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<stdint.h>

int	ft_printf(const char *s, ...);
int	format(va_list args, const char conv);
int	ft_putchar(int c);
int	ft_putstr(char *s);
// int ft_put_ptr();
int	ft_putnbr(int n);
int	ft_put_unsignd(unsigned int n);
// int ft_put_hex();

#endif
