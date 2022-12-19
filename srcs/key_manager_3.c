/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_manager_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:32:17 by darakely          #+#    #+#             */
/*   Updated: 2022/06/16 18:45:48 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	player_move_left(t_data *arg)
{
	arg->map.mtx[arg->map.y][arg->map.x] = '0';
	load_map(arg, arg->map.y, arg->map.x, 0);
	arg->map.x -= 1;
	arg->map.mtx[arg->map.y][arg->map.x] = 'P';
	load_map(arg, arg->map.y, arg->map.x, 0);
	arg->game.count_steps++;
	return (0);
}

static int	player_move_right(t_data *arg)
{
	arg->map.mtx[arg->map.y][arg->map.x] = '0';
	load_map(arg, arg->map.y, arg->map.x, 2);
	arg->map.x += 1;
	arg->map.mtx[arg->map.y][arg->map.x] = 'P';
	load_map(arg, arg->map.y, arg->map.x, 2);
	arg->game.count_steps++;
	return (0);
}

int	key_manager_3(int key, t_data *arg)
{
	if (key == ESC)
		free_exit("Game closed successfully\n", arg);
	if (key == W || key == UP || key == S || key == DOWN)
		key_manager_4(key, arg);
	if ((key == A || key == LEFT)
		&& ((arg->map.mtx[arg->map.y][arg->map.x - 1] != '1')
		&& arg->map.mtx[arg->map.y][arg->map.x - 1] != 'E'
		&& arg->map.mtx[arg->map.y][arg->map.x - 1] != 'Y'))
		player_move_left(arg);
	else
		key_manager(key, arg);
	if ((key == D || key == RIGHT)
		&& ((arg->map.mtx[arg->map.y][arg->map.x + 1] != '1')
		&& arg->map.mtx[arg->map.y][arg->map.x + 1] != 'E'
		&& arg->map.mtx[arg->map.y][arg->map.x + 1] != 'Y'))
		player_move_right(arg);
	else
		key_manager(key, arg);
	return (0);
}
