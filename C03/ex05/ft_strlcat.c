/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:12:11 by slescure          #+#    #+#             */
/*   Updated: 2019/07/11 10:22:23 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int x;

	i = 0;
	j = 0;
	x = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	if (size <= j)
		i += size;
	else
		i += j;
	while (src[x] != '\0' && j + 1 < size)
	{
		dest[j] = src[x];
		j++;
		x++;
	}
	dest[j] = '\0';
	return (i);
}
