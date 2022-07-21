/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:39:29 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/20 21:52:13 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	**ft_alloc_into_array(char *str, char **chars, int len, int i);
char	**ft_check_map_chars(char *str);
char	*ft_delete_chars(char *str);
char	*ft_delete_chars_trim(char *newstr, char *str, int len, int i);
int		ft_calculate_columns(char *str);
char	**ft_convert_to_array(char *str, int row, int col);
int		ft_atoi(char *str);
char	*ft_file_read(char *file, int *x);
char	*ft_stdin_read(int readval, int cnt, int *x);
void	ft_free_str(char *str, char *str2);
int		ft_malloc_cnt(char *file);
char	ft_strcpy(char *dest, char *src);
void	ft_print_out_array(char **array, int row);
void	ft_putstr(char *str);
int		ft_valid_map(char *map, char **chars, int rowcheck, int colcnt);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_delete_endlines(char *str, int x);
char	**ft_modify_map(char **map, int *coords, char filler);
int		**ft_make_square_check_map(char **map, char **chars, int row, int col);
int		**ft_assign_biggest_square(int **map2, int row, int col);
int		*ft_find_coords(int **map2, int row, int col);
int		ft_smallest(int topleft, int left, int top);
int		*ft_biggest_sqr_check(char **map, char **chars, int row, int col);
void	ft_expand_main(int argc, char *argv, int col);
void	ft_map_solver(char *input, char **chars, int col);
char	*ft_change_x(char *str, int *x);
char	*ft_change_x_2(char *str, int *x);

#endif
