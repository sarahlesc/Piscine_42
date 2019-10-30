/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:45:06 by slescure          #+#    #+#             */
/*   Updated: 2019/07/11 10:22:16 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	n = 0;
	while (to_find[n] != '\0')
		n++;
	if (n == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == n - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
