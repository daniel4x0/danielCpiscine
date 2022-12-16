/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzegbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:51:19 by duzegbu           #+#    #+#             */
/*   Updated: 2022/11/21 09:57:47 by duzegbu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int		x;
	int		y;
	int		z;

		x = '0';
	while (x <= '7')
	{
			y = x + 1;
		while (y <= '8')
		{
				z = y + 1;
			while (z <= '9')
			{
				ft_putchar(x, y, z);
				if (x != '7')
				{
					write(1, &", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
