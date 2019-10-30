/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:23:31 by slescure          #+#    #+#             */
/*   Updated: 2019/07/11 10:21:32 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				p;

	i = 0;
	p = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			p = s1[i] - s2[i];
			return (p);
		}
		i++;
	}
	if ((s1[i] != '\0' && s2[i] == 0 && i < n)
			|| (s1[i] == 0 && s2[i] != '\0' && i < n))
	{
		p = s1[i] - s2[i];
		return (p);
	}
	return (0);
}
