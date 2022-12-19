/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_position_img.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:47:18 by darakely          #+#    #+#             */
/*   Updated: 2022/06/16 17:31:40 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	player_position_img(t_data *arg, int x, int y, int key)
{
	if (key == 0)
		mlx_put_image_to_window(arg->mlx, arg->win, arg->p_a, x, y);
	if (key == 1)
		mlx_put_image_to_window(arg->mlx, arg->win, arg->p_s, x, y);
	if (key == 2)
		mlx_put_image_to_window(arg->mlx, arg->win, arg->p_d, x, y);
	if (key == 13)
		mlx_put_image_to_window(arg->mlx, arg->win, arg->p_w, x, y);
	return (0);
}
