/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:07:31 by slescure          #+#    #+#             */
/*   Updated: 2019/07/25 16:07:44 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	if (src == NULL)
		return (NULL);
	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		x;
	char	*dest;

	i = 0;
	x = 0;
	if (size == 0)
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	while (i < size)
		x += ft_strlen(strs[i++]);
	if (!(dest = malloc(sizeof(char) * size * ft_strlen(sep) + x + 1)))
		return (NULL);
	ft_strcpy(dest, strs[0]);
	i = 0;
	while (i++ < size - 1)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, strs[i]);
	}
	return (dest);
}
