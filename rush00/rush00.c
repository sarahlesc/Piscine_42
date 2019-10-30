/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:52:31 by bchabaan          #+#    #+#             */
/*   Updated: 2019/07/13 16:39:13 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	largeur(int x)
{
	if (x >= 1)
	{
		ft_putchar('o');
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar('-');
				x--;
			}
			ft_putchar('o');
		}
	}
}

void	longueur(int x, int y)
{
	int i;
	int p;

	p = x;
	i = 0;
	if (y > 1)
	{
		if (y > 2)
		{
			while (i < y - 2)
			{
				ft_putchar('|');
				while (x > 2)
				{
					ft_putchar(' ');
					x--;
				}
				x = p;
				ft_putchar('|');
				ft_putchar('\n');
				i++;
			}
		}
		largeur(x);
	}
}

void	rush00(int x, int y)
{
	if (x > 0 && y > 0)
	{
		largeur(x);
		ft_putchar(10);
		longueur(x, y);
	}
}
