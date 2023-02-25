/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:59:56 by samohamm          #+#    #+#             */
/*   Updated: 2023/02/25 15:23:18 by samohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += format(args, s[i + 1]);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

// int G = 0;
// int main()
// {
// 	char 				c 	= 	'S';
// 	char 				*s	= 	NULL;
// 	int 				i 	= 	-2147483648;
// 	int 				u 	= 	19;
// 	unsigned	char 	a	=	0x64;
// 	int 				b	=	0xFAFA;
// 	int					ret;
// 	int					reter;
// 	static int 			o;
//     int 				y;
//     int 				*p;

// 	p = malloc(sizeof(int));
// 	ret = printf("HELLO NEW PROJECT This Char = %c AND This String 
//= %s AND This Intger %i AND This Digit %d AND This Unsigned %u \n AND 
//This HEX %X AND This hex %x \n", c, s, i, i, u, a, b);
// 	printf("printf returns %d bytes\n", ret);
// 	reter = ft_printf("HELLO NEW PROJECT This Char =
// %c AND This String = %s AND This Intger %i AND This Digit 
//%d AND This Unsigned %u 
//\n AND This HEX %X AND This hex %x \n", c, s, i, i, u, a, b);
// 	printf("ft_printf returns %d bytes\n", reter);
// 	printf("*******************************************************\n");
// 	printf("&G   = %p\n", (void *) &G);
// 	printf("&o   = %p\n", (void *) &s);
// 	printf("&y   = %p\n", (void *) &a);
// 	printf("&p   = %p\n", (void *) &p);
// 	printf("p    = %p\n", (void *) p);
// 	printf("<<<<<<<<<<<<<<<**************************>>>>>>>>>>>>>>>\n");
// 	ft_printf("&G   = %p\n", (void *) &G);
// 	ft_printf("&o   = %p\n", (void *) &s);
// 	ft_printf("&y   = %p\n", (void *) &a);
// 	ft_printf("&p   = %p\n", (void *) &p);
// 	ft_printf("p    = %p\n", (void *) p);
// 	free(p);
// }
