/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmasi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:58:06 by bmasi             #+#    #+#             */
/*   Updated: 2017/08/20 03:02:47 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putchar('7');
		ft_putchar('4');
		ft_putchar('8');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('8');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}
