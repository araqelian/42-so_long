/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:47:39 by darakely          #+#    #+#             */
/*   Updated: 2022/06/15 20:32:22 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_size_map(t_data *arg)
{
	arg->size.x = 0;
	arg->size.y = 0;
	while (arg->size.y < arg->map.y)
	{
		while (arg->size.x < arg->map.x)
			arg->size.x++;
		arg->size.y++;
	}
}
