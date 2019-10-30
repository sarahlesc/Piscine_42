/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:59:13 by slescure          #+#    #+#             */
/*   Updated: 2019/07/25 11:25:51 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (i == 0 && str[0] > 'a' && str[0] < 'z')
		str[i] -= 32;
	i++;
	while (str[i + 1] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= '0' && str[i] <= '9')
		|| (str[i] >= 'A' && str[i] <= 'Z'))
		&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
