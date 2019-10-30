/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:48:29 by slescure          #+#    #+#             */
/*   Updated: 2019/07/24 11:05:24 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*a;
	int		i;

	a = malloc((ft_strlen(src) + 1) * sizeof(*src));
	if (a == NULL)
		exit(0);
	i = 0;
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	if (ac < 0 || !av)
		return (NULL);
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (!av[i])
		{
			while (i > 0)
				free(tab[--i].copy);
			free(tab);
			return (NULL);
		}
		tab[i].str = av[i];
		tab[i].size = ft_strlen(av[i]);
		if (!(tab[i].copy = ft_strdup(av[i])))
			return (NULL);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
