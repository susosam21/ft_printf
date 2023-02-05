/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:21:41 by samohamm          #+#    #+#             */
/*   Updated: 2023/02/05 20:37:42 by samohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_putnbr.c"
// #include "ft_put_unsignd.c"


int	format(va_list args, const char conv)
{
	int j;

	j=0;
	if (conv == 'c')
		j += ft_putchar(va_arg(args,int)); 
	else if (conv == 's')
		j += ft_putstr(va_arg(args, char *));
	// else if (conv == 'p')
	// 	j += ft_put_ptr(va_arg(args,unsigned long long));
	else if (conv == 'd')
		j += ft_putnbr(va_arg(args,int));
	else if (conv == 'i')
		j += ft_putnbr(va_arg(args,int));
	// else if (conv == 'u')
	// 	j += ft_put_unsignd(va_arg(args, unsigned int));
	// else if (conv == 'x' || conv == 'X')
	// 	j += ft_put_hex(va_arg(args,unsigned int), conv);
	else if (conv == '%')
	{
		write(1, "%", 1);
		j++;
	}
	return (j);
}
