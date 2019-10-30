/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:02:52 by slescure          #+#    #+#             */
/*   Updated: 2019/07/24 17:27:32 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_verification(char *base);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

long	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

char	*int_to_char(long x, int y, char *str, int k)
{
	char	*tab;
	int		nb;
	int		i;
	int		j;

	j = 0;
	nb = 1;
	while (x / ft_recursive_power(y, nb) > 0)
		nb++;
	tab = malloc(sizeof(char) * nb + 3);
	if (tab == NULL)
		return (NULL);
	nb--;
	i = nb;
	if (k == 1)
		tab[j] = '-';
	while (j <= i)
	{
		tab[j + k] = str[(x / ft_recursive_power(y, nb))];
		x = x % ft_recursive_power(y, nb);
		nb--;
		j++;
	}
	tab[j + k] = '\0';
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long			x;
	unsigned int	y;
	int				k;

	k = 0;
	if (ft_verification(base_from) == 0 || ft_verification(base_to) == 0)
		return (NULL);
	x = ft_atoi_base(nbr, base_from);
	if (x < 0)
	{
		k = 1;
		x = -x;
	}
	y = ft_strlen(base_to);
	return (int_to_char(x, y, base_to, k));
}
