/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabaan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:52:31 by bchabaan          #+#    #+#             */
/*   Updated: 2019/07/09 09:36:03 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void		largeur(int x)
{
	if (x >= 1)
	{
		ft_putchar('A');
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar('B');
				x--;
			}
			ft_putchar('A');
		}
	}
}

void		largeur2(int x)
{
	if (x >= 1)
	{
		ft_putchar('C');
		if (x > 2)
		{
			while (x > 2)
			{
				ft_putchar('B');
				x--;
			}
		}
		ft_putchar('C');
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
				ft_putchar('B');
				while (x > 2)
				{
					ft_putchar(' ');
					x--;
				}
				x = p;
				ft_putchar('B');
				ft_putchar('\n');
				i++;
			}
		}
		largeur2(x);
	}
}

void		rush02(int x, int y)
{
	if (x > 0 && y > 0)
	{
		largeur(x);
		ft_putchar(10);
		longueur(x, y);
	}
}
