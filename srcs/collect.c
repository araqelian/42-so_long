/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:16:11 by darakely          #+#    #+#             */
/*   Updated: 2022/06/15 18:41:09 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_count_collect(t_data *arg)
{
	int	row;
	int	col;

	row = 0;
	arg->game.count_collect = 0;
	while (row < arg->size.y)
	{
		col = 0;
		while (arg->map.mtx[row][col])
		{
			if (arg->map.mtx[row][col] == 'C')
				arg->game.count_collect++;
			col++;
		}
		row++;
	}
	return (arg->game.count_collect);
}

int	check_collect(t_data *arg)
{
	if (check_count_collect(arg) == 0)
		free_exit("You won !!!\n", arg);
	return (0);
}
