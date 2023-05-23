/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_tex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:01:36 by magonzal          #+#    #+#             */
/*   Updated: 2023/05/23 17:55:20 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_load_no(t_ray *ray)
{
	if(open(ray->mapest->no_tex_path, O_RDONLY) == -1)
		exit(1);
	ray->tex.no.img = mlx_xpm_file_to_image(ray->mlx, ray->mapest->no_tex_path,
			&ray->tex.width, &ray->tex.height);
	ray->tex.no.addr = mlx_get_data_addr(ray->tex.no.img, &ray->tex.no.bppx,
			&ray->tex.no.line_length, &ray->tex.no.endian);
}

void	ft_load_so(t_ray *ray)
{
	if(open(ray->mapest->so_tex_path, O_RDONLY) == -1)
		exit(1);
	ray->tex.so.img = mlx_xpm_file_to_image(ray->mlx, ray->mapest->so_tex_path,
			&ray->tex.width, &ray->tex.height);
	ray->tex.so.addr = mlx_get_data_addr(ray->tex.so.img, &ray->tex.so.bppx,
			&ray->tex.so.line_length, &ray->tex.so.endian);
}

void	ft_load_we(t_ray *ray)
{
	if(open(ray->mapest->we_tex_path, O_RDONLY) == -1)
		exit(1);
	ray->tex.we.img = mlx_xpm_file_to_image(ray->mlx, ray->mapest->we_tex_path,
			&ray->tex.width, &ray->tex.height);
	ray->tex.we.addr = mlx_get_data_addr(ray->tex.we.img, &ray->tex.we.bppx,
			&ray->tex.we.line_length, &ray->tex.we.endian);
}

void	ft_load_ea(t_ray *ray)
{
	if(open(ray->mapest->ea_tex_path, O_RDONLY) == -1)
		exit(1);
	ray->tex.ea.img = mlx_xpm_file_to_image(ray->mlx, ray->mapest->ea_tex_path,
			&ray->tex.width, &ray->tex.height);
	ray->tex.ea.addr = mlx_get_data_addr(ray->tex.ea.img, &ray->tex.ea.bppx,
			&ray->tex.ea.line_length, &ray->tex.ea.endian);
}

t_ray	*ft_load_tex(t_ray *ray)
{
	ft_load_ea(ray);
	ft_load_no(ray);
	ft_load_so(ray);
	ft_load_we(ray);
	return (ray);
}
