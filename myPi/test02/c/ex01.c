/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 01:03:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/08/30 14:53:34 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(c)
{
	write(1, &c, 1);
	return 0;
}

int main()
{
	int i;

		i = 122;
			while (i >= 97)
					{
								ft_putchar(i);
										i--;
											}
	return 0;
}
