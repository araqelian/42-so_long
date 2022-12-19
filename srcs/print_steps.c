/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_steps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:07:06 by darakely          #+#    #+#             */
/*   Updated: 2022/06/15 19:19:10 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	print_steps(t_data *arg)
{
	char	*str;

	str = ft_itoa(arg->game.count_steps);
	map_for_steps(arg);
	mlx_string_put(arg->mlx, arg->win, 20, 10, 0xffffff, str);
	free(str);
	return (0);
}
