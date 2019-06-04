/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 06:42:06 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 09:51:30 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483647)
		ft_putstr("-2147483647");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n = n % 10);
		}
		else
			ft_putchar(n += '0');
	}
}
/*
int	main(void)
{
	int number;

	number = -2147483647;

	ft_putnbr(number);
}*/
