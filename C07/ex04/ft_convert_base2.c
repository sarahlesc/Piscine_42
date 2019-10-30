/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:43:12 by slescure          #+#    #+#             */
/*   Updated: 2019/07/24 19:38:57 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verification(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\f'
				|| base[i] == '\r' || base[i] == ' ' || base[i] == '\v')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

int		base_to_int(char c, char *base)
{
	int x;

	x = 0;
	while (base[x] != '\0')
	{
		if (base[x] == c)
		{
			return (x);
		}
		x++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	unsigned int	k;
	unsigned int	res;

	res = 0;
	k = ft_verification(base);
	while (*str != '\0' && (*str == ' ' || *str == '\t' ||
				*str == '\r' || *str == '\v' || *str == '\f'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			k = -k;
		str++;
	}
	i = 0;
	while (base[i] != '\0')
		i++;
	while (base_to_int(*str, base) != -1 && *str != '\0')
	{
		res = res * i + (base_to_int(*str, base));
		str++;
	}
	return (res * k);
}
