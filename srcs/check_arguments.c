/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 22:01:00 by darakely          #+#    #+#             */
/*   Updated: 2022/06/17 18:35:03 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_arguments(int argc, char **argv)
{
	int	len;

	len = ft_strlen(argv[1]);
	if (argc < 2)
		print_error("Error\nToo few arguments\nTry this ./so_long map/map.ber\n");
	else if (argc > 2)
		print_error("Error\nToo many arguments\nTry this ./so_long map/map.ber\n");
	else if (!ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])))
		print_error("Error\nUnknown format file\nUs format '.ber'\n");
	else if (len < 5)
		print_error("Error\nMissing name map\n");
	return (0);
}
