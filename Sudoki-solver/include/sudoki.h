/*
** sudoki-bi.h for sudoki-bi.h in /home/rahil_f/rendu/sudoki-bi/include
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sat Feb 27 14:42:49 2016 felix rahil
** Last update Sun Feb 28 21:13:23 2016 felix grellard
*/

#ifndef SUDOKI_H_
# define SUDOKI_H_

typedef struct	s_sol
{
  char	**map_nb;
}		t_sol;

typedef	struct s_check_block
{
  int		i;
  int		j;
  int		k;
  int		l;
  int		m;
  int		n;
}		t_check_block;

char	*get_map();
char	**new_map(char *map, char **map_2);
t_sol	*reload_map(char **map_2, t_sol *test);
t_sol	*new_map_number(char **map_2, t_sol *test);
int	check_map(char **map_2);
int	check_map_2(char **map_2);
int	check_map_3(t_sol *test);
int	check_map_4(t_sol *test);
int	check_block_2(t_sol *test, t_check_block *check);
int	check_block(t_sol *test, t_check_block *check);
int	check_map_5(t_sol *test);
void	imposible_map(char **map_2);
int	check_map_6(t_sol *test);
void	display_map(t_sol *test);
t_sol	*main_bis(char **map_2, t_sol *test);
int	soluce(t_sol *test, int pos);
int	test_cube(t_sol *test, int i, int j, char k);
int	test_col(t_sol *test, int j, char k);
int	test_line(t_sol *test, int i, char k);

#endif  /* !SUDOKI_H_ */
