/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:40:04 by magonzal          #+#    #+#             */
/*   Updated: 2023/05/29 23:31:31 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

// void leaks(void)
// {
// 	system("leaks cub3D");
// }

int	main(int argc, char **argv)
{
	t_all	*all;

	//atexit(leaks);
	if (argc != 2)
		return (1);
	all = ft_parse_map(argv);
	ft_cube(all);
	ft_free_struct(all);
}
