/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:06:06 by darakely          #+#    #+#             */
/*   Updated: 2022/07/12 14:04:47 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_manager(int key, t_data *arg)
{
	if ((key == A || key == LEFT)
		&& (arg->map.mtx[arg->map.y][arg->map.x - 1] == 'Y'))
		free_exit("Game over\n", arg);
	else
		key_manager_2(key, arg);
	if ((key == D || key == RIGHT)
		&& (arg->map.mtx[arg->map.y][arg->map.x + 1] == 'Y'))
		free_exit("Game over\n", arg);
	else
		key_manager_2(key, arg);
	if ((key == W || key == UP)
		&& (arg->map.mtx[arg->map.y - 1][arg->map.x] == 'Y'))
		free_exit("Game over\n", arg);
	else
		key_manager_2(key, arg);
	if ((key == S || key == DOWN)
		&& (arg->map.mtx[arg->map.y + 1][arg->map.x] == 'Y'))
		free_exit("Game over\n", arg);
	else
		key_manager_2(key, arg);
	print_steps(arg);
	return (0);
}
