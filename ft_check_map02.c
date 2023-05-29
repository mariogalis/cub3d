/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map02.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:50:02 by magonzal          #+#    #+#             */
/*   Updated: 2023/05/30 00:10:55 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	aux(char	**matrix, int i, int j)
{
	while (matrix[++i])
	{
		j = -1;
		if (ft_strlen(matrix[i]) > 3)
		{
			ft_free_matrix(matrix);
			return (0);
		}
		while (matrix[i][++j])
		{
			if (ft_isdigit(matrix[i][j]) == 0)
			{
				ft_free_matrix(matrix);
				return (0);
			}
		}
	}
	if (i != 3)
	{
		ft_free_matrix(matrix);
		return (0);
	}
	return (1);
}

int	ft_check_end_color(char **map, char *str)
{
	int		i;
	int		j;
	char	*ret;

	i = -1;
	while (map[++i])
	{
		j = 0;
		// while (map[i][j] && map[i][j] == ' ')
		// 	i++;
		if (ft_strncmp(map[i], str, ft_strlen(str)) == 0)
		{
			ret = ft_check_good(map[i]);
			if (ret)
			{
				free(ret);
				return (i);
			}
		}
	}
	return (0);
}

void	ft_check_map_floor(t_all all, int i, int j)
{
	if (i == 0 || j == 0 || j == (int)(ft_strlen(all.mapest->map[i]) - 1)
	|| !all.mapest->map[i + 1])
		ft_error("Error: map open");
	if (!all.mapest->map[i + 1][j] || !all.mapest->map[i - 1][j]
	|| !all.mapest->map[i][j + 1] || !all.mapest->map[i][j - 1])
		ft_error("Error: map open");
	if (all.mapest->map[i + 1][j] == ' ' || all.mapest->map[i - 1][j] == ' '
	|| all.mapest->map[i][j + 1] == ' ' || all.mapest->map[i][j - 1] == ' ')
		ft_error("Error: map open");
}

void	ft_check_map02(t_all all)
{
	int	i;
	int	j;

	i = ft_check_end_color(all.mapest->map, "C") + 1;
	while (all.mapest->map[++i])
	{
		j = -1;
		while (all.mapest->map[i][++j])
		{
			if (!ft_strchr(SYMBOLS, all.mapest->map[i][j]))
				ft_error("Error: bad symbols");
			else if (ft_strchr(FLOOR, all.mapest->map[i][j]))
				ft_check_map_floor(all, i, j);
		}
	}
}
