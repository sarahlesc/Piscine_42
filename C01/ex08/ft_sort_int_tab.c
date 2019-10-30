/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int-tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slescure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 22:25:56 by slescure          #+#    #+#             */
/*   Updated: 2019/07/25 14:36:02 by slescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int p;
	int t;
	int *min;
	int *max;

	a = 0;
	while (a < size)
	{
		p = 0;
		while (p < a)
		{
			min = tab + p;
			max = tab + a;
			if (*max < *min)
			{
				t = *min;
				*min = *max;
				*max = t;
			}
			p++;
		}
		a++;
	}
}
