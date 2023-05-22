/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:39:31 by magonzal          #+#    #+#             */
/*   Updated: 2023/05/22 17:39:32 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

int	ft_print_matrix(char **matrix)
{
	int	i;

	i = 0;
	if (!matrix)
	{
		printf("Null\n");
		fflush(0);
		return (1);
	}
	while (matrix[i])
	{
		ft_putstr_fd(matrix[i++], 1);
		ft_putchar_fd('\n', 1);
	}
	return (0);
}
