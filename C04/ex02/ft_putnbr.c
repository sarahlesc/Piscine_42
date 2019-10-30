/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:54:39 by slescure          #+#    #+#             */
/*   Updated: 2019/07/11 17:35:36 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned	int x;

	if (nb < 0)
	{
		x = -nb;
		ft_putchar('-');
	}
	else
		x = nb;
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putchar('0' + x % 10);
	}
	else
		ft_putchar('0' + x);
}
