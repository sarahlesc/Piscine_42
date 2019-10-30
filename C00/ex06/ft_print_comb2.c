/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 18:06:13 by slescure          #+#    #+#             */
/*   Updated: 2019/07/05 16:06:16 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ecriture(int ix)
{
	ft_putchar('0' + ix / 10);
	ft_putchar('0' + ix % 10);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_ecriture(a);
			ft_putchar(' ');
			ft_ecriture(b);
			if (a == 98)
				break ;
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
