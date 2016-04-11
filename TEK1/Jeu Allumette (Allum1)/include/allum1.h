/*
** allum1.h for allum1.h in /home/rahil_f/rendu/CPE_2015_Allum1/include
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Mon Feb  8 15:24:19 2016 felix rahil
** Last update Sun Feb 21 15:31:34 2016 felix rahil
*/


#ifndef ALLUM1_H_
# define ALLUM1_H_

typedef struct	s_check
{
  int		check_get;
  int		num_lines;
  int		num_matches;
  int		check_lines;
  int		check_matches;
  int		check_all;
}		t_check;

char	*get_next_line(const int fd);
void	my_putchar(char c);
void	my_putstr(char *str);
int     my_getnbr(char *str);
void    my_put_nbr(int nb);
int	*ia(int *tab);

#endif	/* !ALLUM1_H_ */
