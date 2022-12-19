/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:30:03 by darakely          #+#    #+#             */
/*   Updated: 2022/07/12 14:06:58 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int argc, char **argv)
{
	t_data	arg;

	check_arguments(argc, argv);
	get_map_x_y(&arg, argv);
	get_size_map(&arg);
	init_position_player(&arg);
	arg.mlx = mlx_init();
	arg.win = mlx_new_window(arg.mlx, arg.size.x * 50, arg.size.y * 50, "Tank");
	check_count_collect(&arg);
	mlx_xpm(&arg);
	get_map(&arg);
	mlx_hook(arg.win, 17, 1L << 0, mlx_close, &arg);
	mlx_hook(arg.win, 2, 1l << 0, key_manager_3, &arg);
	mlx_loop(arg.mlx);
	return (0);
}
