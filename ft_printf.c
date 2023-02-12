/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:59:56 by samohamm          #+#    #+#             */
/*   Updated: 2023/02/12 20:02:57 by samohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "format.c"

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

int main()
{
	char c = 'S';
	char *s= NULL;
	int i = -2147483648;
	int u = 19;
	int ret;
	int reter;
	
	ret = printf("HELLO NEW PROJECT This Char = %c AND This String = %s AND This Intger %i AND This Digit %d AND This Unsigned %u \n", c, s,i,i,u);
  	printf("printf returns %d bytes\n", ret);
	
	reter = ft_printf("HELLO NEW PROJECT This Char = %c AND This String = %s AND This Intger %i AND This Digit %d AND This Unsigned %u \n", c, s,i,i,u);
  	printf("ft_printf returns %d bytes\n", reter);
}