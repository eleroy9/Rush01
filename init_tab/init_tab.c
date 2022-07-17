/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:42:54 by eleroy            #+#    #+#             */
/*   Updated: 2022/07/17 17:07:18 by eleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	**ft_init_tab(char	*str, int size)
{
	char	**tab;
	int	y;
	int	x;

	if (!(tab = malloc(size * sizeof(char*)))
		return (NULL);
	y = -1;
	while(++y < size)
	{
		if (!(tab = malloc((size + 4) * sizeof(char))))
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
		x = -1;
		while (++x < 4)
			tab[y][x + size] = str[2 * (y + x *size)] - '0');
	}
	return (tab);
}

void	ft_print_tab(char **tab; int	size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while(x < size)
		{
			ft_putchar(tab[y][x] + '0');
			if (++x < size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}
