/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samohamm <samohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:50:07 by samohamm          #+#    #+#             */
/*   Updated: 2023/02/05 19:52:57 by samohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsignd(unsigned int n)
{
	int				i;
	unsigned int	r;

	i = 0;
	r = 0;
	if (n / 10)
	{
		ft_put_unsignd(n / 10);
		ft_put_unsignd(n % 10);
	}
	else
	{
		r = '0' + n;
		write(1, r, 1);
		i++;
	}
	return (i);
}
