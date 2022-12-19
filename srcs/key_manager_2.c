/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_manager_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:58:48 by darakely          #+#    #+#             */
/*   Updated: 2022/06/16 16:29:47 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_manager_2(int key, t_data *arg)
{
	if ((key == A || key == LEFT)
		&& (arg->map.mtx[arg->map.y][arg->map.x - 1] == 'E'))
		check_collect(arg);
	if ((key == D || key == RIGHT)
		&& (arg->map.mtx[arg->map.y][arg->map.x + 1] == 'E'))
		check_collect(arg);
	if ((key == W || key == UP)
		&& (arg->map.mtx[arg->map.y - 1][arg->map.x] == 'E'))
		check_collect(arg);
	if ((key == S || key == DOWN)
		&& (arg->map.mtx[arg->map.y + 1][arg->map.x] == 'E'))
		check_collect(arg);
	return (0);
}
