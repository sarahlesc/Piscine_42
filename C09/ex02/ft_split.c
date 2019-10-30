/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:54:37 by slescure          #+#    #+#             */
/*   Updated: 2019/07/23 11:06:48 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int m;
	int i;

	m = 0;
	i = 0;
	while (str[i])
	{
		while ((is_sep(str[i], charset)) && str[i] != '\0')
			i++;
		if (!is_sep(str[i], charset) && str[i] != '\0')
			m++;
		while (!is_sep(str[i], charset) && str[i] != '\0')
			i++;
	}
	m++;
	return (m);
}

void	alloc_word(char *str, char *charset, char **ptr)
{
	int m;
	int c;

	m = 0;
	c = 0;
	while (*str)
	{
		while ((is_sep(*str, charset)) && *str != '\0')
			str++;
		if (!is_sep(*str, charset) && *str != '\0')
		{
			if (m != 0)
				ptr[m - 1] = malloc((1 + c) * sizeof(char));
			c = (m != 0) ? 0 : c;
			m++;
		}
		while (!is_sep(*str, charset) && *str != '\0')
		{
			str++;
			c++;
		}
	}
	ptr[m - 1] = malloc((1 + c) * sizeof(char));
	ptr[m] = malloc(sizeof(NULL));
}

char	**ft_split(char *str, char *charset)
{
	int		c;
	int		m;
	char	**ptr;

	ptr = malloc(count_words(str, charset) * sizeof(*ptr));
	alloc_word(str, charset, ptr);
	m = 0;
	c = 0;
	while (*str)
	{
		while ((is_sep(*str, charset)) && *str != '\0')
			str++;
		if (!is_sep(*str, charset) && *str != '\0')
		{
			if (m != 0)
				ptr[m - 1][c] = '\0';
			c = (m != 0) ? 0 : c;
			m++;
		}
		while (!is_sep(*str, charset) && *str != '\0')
			ptr[m - 1][c++] = *(str++);
	}
	ptr[m - 1][c] = '\0';
	ptr[m] = NULL;
	return (ptr);
}
