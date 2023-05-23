/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:52:15 by magonzal          #+#    #+#             */
/*   Updated: 2023/05/23 15:35:35 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_check_line_init(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j] == ' ' || map[i][j] == 'C')
		{
			if (map[i][j] == 'C')
				if (map[i][j + 1] == ' ')
					return (i);
			j++;
		}
		i++;
	}
	return (0);
}

char	**ft_clean_map(char **read)
{
	int		inic;
	int		i;
	char	**ret;

	i = 0;
	inic = ft_check_line_init(read);
	if (!inic)
		ft_error("bad arguments");
	while (read[i])
		i++;
	ret = (char **)malloc(sizeof(char *) * (i - inic));
	i = 0;
	inic++;
	while (read[inic])
	{
		ret[i] = ft_strdup(read[inic]);
		i++;
		inic++;
	}
	ret[i] = NULL;
	return (ret);
}
