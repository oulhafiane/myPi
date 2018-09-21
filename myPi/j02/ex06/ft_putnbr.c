/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:03:15 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/02 21:30:49 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int n1;
	int n2;
	int c;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	c = 1;
	n2 = nb;
	while (n2 > 0)
	{
		n2 = n2 / 10;
		c = c * 10;
	}
	n2 = nb;
	while (c >= 10)
	{
		c = c / 10;
		n1 = n2 / c;
		n2 = n2 % c;
		ft_putchar(n1 + 48);
	}
}

int		main(void)
{
	ft_putnbr(+2147483647);
	return (0);
}
