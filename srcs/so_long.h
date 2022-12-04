/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:31:12 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/28 19:31:12 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>

# include "./../get_next_line/get_next_line.h"
# include "./../ft_printf/ft_printf.h"
# include "./../libft/libft.h"
# include "./../minilibx-linux/mlx.h"

typedef struct s_map_info
{
	char	**map;
	int		len_map;
	int		map_p_index;
	int		line_p_index;
	int		exit_position_horizontal;
	int		exit_position_vertical;
	int		len_line;
	int		current_position_horizontal;
	int		current_position_vertical;
	int		prev_current_position_horizontal;
	int		prev_current_position_vertical;
}	t_map_info;

void	ft_parsing(int fd);
void	ft_print_map(t_map_info *data);
void	check_and_replace(t_map_info *data, int i, int j, int *add_x);
int		ft_check_map(char *pathname, t_map_info *data);
int		isnt_obstacle(t_map_info *data, char search, int i, int j);
int		check_e_around_elmnt(t_map_info *data, int i, int j);
int		is_path_valid(t_map_info *data);
int		ft_map_has_all_needed(t_map_info *data);
int		ft_count_line(char *pathname);
int		ft_fill_map(char *pathname, t_map_info *data);
int		ft_is_characters(char c);
int		ft_is_wall_top_bottom(char *line);
int		ft_is_border_wall(char *line);
int		ft_is_border_map_ok(t_map_info *data);
int		ft_is_rectangle_map(t_map_info *data);
int		ft_find_depart_vert_position(char *line, t_map_info *data);
int		ft_find_depart_horizontal_position(t_map_info *data);
int		ft_find_path(t_map_info *data);

#endif