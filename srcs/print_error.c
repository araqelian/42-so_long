/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:40:52 by darakely          #+#    #+#             */
/*   Updated: 2022/06/15 20:44:43 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	print_error(char *str)
{
	char	*str_n;
	char	*str_n_2;

	str_n = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n---------------------------------------------\n";
	str_n_2 = "---------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	write(1, str_n, ft_strlen(str_n));
	write(2, str, ft_strlen(str));
	write(1, str_n_2, ft_strlen(str_n_2));
	exit(1);
}
