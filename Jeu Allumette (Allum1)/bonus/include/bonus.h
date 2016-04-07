/*
** bonus.h for bonus.h in /home/rahil_f/rendu/CPE_2015_Allum1/bonus/include
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Mon Feb 15 20:15:45 2016 felix rahil
** Last update Sun Feb 21 13:08:51 2016 felix rahil
*/

#ifndef BONUS_H_
# define BONUS_H_

typedef struct	s_start
{
  int		check_game;
  int		check_yes;
  int		choice_game;
  char		*end;
  char		*game;
}		t_start;

void	start();
t_start	jeu(t_start go);
int	my_strcmp(char *s1, char *s2);

#endif  /* !BONUS_H_ */
