/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:47:23 by slescure          #+#    #+#             */
/*   Updated: 2019/07/13 14:28:28 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_verification(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] < '0' || base[i] > '9') && (base[i] < 'a' || base[i] > 'z')
				&& (base[i] < 'A' || base[i] > 'Z'))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	if (ft_verification(base) == 0)
		return ;
	while (base[i] != '\0')
		i++;
	if (nbr < 0)
	{
		x = -nbr;
		ft_putchar('-');
	}
	else
		x = nbr;
	if (x > i - 1)
	{
		ft_putnbr_base(x / i, base);
		ft_putchar(base[x % i]);
	}
	else
		ft_putchar(base[x]);
}
