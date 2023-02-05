/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:50:12 by samohamm          #+#    #+#             */
/*   Updated: 2023/02/05 20:48:43 by samohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	lenn(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nn;
	size_t			i;

	i = lenn(n);
	nn = n;
	str = malloc(sizeof(char) * (i) + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n == 0)
		str[--i] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nn = n * -1;
	}
	while (nn > 0)
	{
		str[--i] = (nn % 10) + '0';
		nn = nn / 10;
	}
	return (str);
}

int	ft_putnbr(int n)
{
	int	i;
	char	*r;

	i = lenn(n);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		write(1, "-", 1);
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		r = ft_itoa(n); 
		write(1, r, 1);
	}
	return (i);
}
