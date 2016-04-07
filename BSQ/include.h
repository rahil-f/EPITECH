/*
** include.h for include.h in /home/rahil_f/rendu/CPE_2015_BSQ
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sat Dec 19 13:41:36 2015 felix rahil
** Last update Wed Dec 30 14:37:19 2015 felix rahil
*/

#ifndef INCLUDE_H_
# define INCLUDE_H_


typedef struct	s_find
{
  int		i;
  int		j;
  int		size;
}		t_find;

typedef struct	s_norme
{
  int		i;
  int		j;
  int		k;
  char		*finish;
  t_find	square;
}		t_norme;

char            *cut_map(char *map);
char            *get_map(char *filepath);
int             count_lines(char *map);
int             count_cols(char *map);
int             **change(char *map, int lines, int cols);
int		**demin(int **mem, int lines, int cols);
t_find          find_cube(int **mem, int lines, int cols);
void            draw_norm(int **mem, int lines, int cols, t_find square);
void            draw(int **mem, int lines, int cols, t_find square);
void            my_putstr_int(int **str, int lines, int cols);

#endif /* !INCLUDE_H_ */
