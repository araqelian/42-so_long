/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:27:36 by darakely          #+#    #+#             */
/*   Updated: 2022/07/12 14:03:33 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>
# include "./keys.h"

# define BUFFER_SIZE 30

typedef struct s_size
{
	int		x;
	int		y;
}				t_size;

typedef struct s_game
{
	int	count_collect;
	int	count_enemy;
	int	count_steps;
}				t_game;

typedef struct s_enemy
{
	int	x;
	int	y;
}				t_enemy;

typedef struct s_map
{
	char	**mtx;
	int		x;
	int		y;
}				t_map;

typedef struct s_player
{
	int	x;
	int	y;
}				t_player;

typedef struct s_data
{
	t_map		map;
	t_game		game;
	t_size		size;
	t_enemy		enemy;
	t_player	player;
	void		*i_0;
	void		*i_1;
	void		*p_w;
	void		*p_a;
	void		*p_s;
	void		*p_d;
	void		*i_c;
	void		*i_y;
	void		*i_e;
	int			x;
	int			y;
	void		*mlx;
	void		*win;
}				t_data;

//size_map
void		get_size_map(t_data *arg);

//check_img
int			check_img(t_data *arg);

//get_map
void		mlx_xpm(t_data *arg);
void		load_map(t_data *arg, int row, int col, int key);
int			get_map(t_data *arg);

//free_exit
int			free_exit(char *str, t_data *arg);
int			free_map(t_data *arg);
int			mlx_close(t_data *arg);

//check_map
int			check_map(t_data arg, char **map);

//map_for_steps
int			map_for_steps(t_data *arg);

//print_error
void		print_error(char *str);

//key_manager_2
int			key_manager_2(int key, t_data *arg);

//print_steps
int			print_steps(t_data *arg);
int			ft_strlen(char *str);

//player_position_img
int			player_position_img(t_data *arg, int row, int col, int key);

//collcet
int			check_count_collect(t_data *arg);
int			check_collect(t_data *arg);

//get_next_line
int			get_next_line(int fd, char **line);

//check_arguments
int			check_arguments(int argc, char **argv);

//key_manager
int			key_manager(int key, t_data *arg);

//key_manager_3
int			key_manager_3(int key, t_data *arg);

//key_manager_4
int			key_manager_4(int key, t_data *arg);

//utils
int			ft_strlen(char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
void		*ft_strcpy(char *dst, char *src, size_t n);
char		*ft_itoa(int n);

//map
int			get_map_x_y(t_data *arg, char **map);
int			get_row_map(t_data *arg, char **map);
int			get_init_game(t_data *arg);
int			init_position_player(t_data *arg);

#endif
