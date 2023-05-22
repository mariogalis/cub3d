/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:33:26 by magonzal          #+#    #+#             */
/*   Updated: 2023/05/22 17:33:29 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

char	**ft_free_matrix(char **result)
{
	int	i;

	i = -1;
	if (!result)
		return (0);
	while (result[++i])
		free(result[i]);
	free(result);
	return (0);
}
