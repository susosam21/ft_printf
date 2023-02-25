/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:50:12 by samohamm          #+#    #+#             */
/*   Updated: 2023/02/25 20:04:33 by samohamm         ###   ########.fr       */
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

int	ft_putnbr(int nb)
{
	size_t			i;

	i = lenn(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (i);
}

int	ft_put_unsignd(unsigned int n)
{
	int	i;

	i = 0;
	if (n / 10)
	{
		i += ft_put_unsignd(n / 10);
		i += ft_put_unsignd(n % 10);
	}
	else
		i += ft_putnbr(n);
	return (i);
}
