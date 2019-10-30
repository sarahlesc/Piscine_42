/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:52:31 by bchabaan          #+#    #+#             */
/*   Updated: 2019/07/06 17:45:53 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		largeur1(int x)
{
	if (x >= 1)
	{
		ft_putchar(47);
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar(42);
				x--;
			}
			ft_putchar(92);
		}
	}
}

void		largeur2(int x)
{
	if (x >= 1)
	{
		ft_putchar(92);
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar(42);
				x--;
			}
			ft_putchar(47);
		}
	}
}

void		longueur(int x, int y)
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
				ft_putchar(42);
				while (x > 2)
				{
					ft_putchar(' ');
					x--;
				}
				x = p;
				ft_putchar(42);
				ft_putchar('\n');
				i++;
			}
		}
		largeur2(x);
	}
}

void		rush01(int x, int y)
{
	if (x > 0 && y > 0)
	{
		largeur1(x);
		ft_putchar(10);
		longueur(x, y);
	}
}
