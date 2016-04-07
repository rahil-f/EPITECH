/*
** ia.c for ia.c in /home/rahil_f/rendu/CPE_2015_Allum1
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Thu Feb 11 13:22:07 2016 felix rahil
** Last update Sun Feb 21 12:00:21 2016 felix rahil
*/
#include "include/allum1.h"
#include <time.h>
#include <stdio.h>

int	lines_ia(int *tab)
{
  int           num_lines_ia;
  int           check_lines_ia;

  check_lines_ia = 0;
  while (check_lines_ia == 0)
    {
      check_lines_ia = 1;
      num_lines_ia = (rand() % 5);
      if (num_lines_ia == 0)
	num_lines_ia = 1;
      if (num_lines_ia > 4 || tab[num_lines_ia -1] == 0 || num_lines_ia < 0)
        {
          check_lines_ia = 0;
        }
      else
        check_lines_ia = 1;
    }
  return (num_lines_ia);
}

void	aff_ia(int num_lines_ia, int num_matches_ia)
{
  my_putstr("AI removed ");
  my_put_nbr(num_matches_ia);
  my_putstr(" match(es) from line ");
  my_put_nbr(num_lines_ia);
  my_putchar('\n');
}

int	*ia(int *tab)
{
  int           num_lines_ia;
  int           num_matches_ia;
  int           check_lines_ia;
  int           check_matches_ia;

  check_matches_ia = 0;
  check_lines_ia = 0;
  my_putstr("AI’s turn...\n");
  num_lines_ia = lines_ia(tab);
  while (check_matches_ia == 0)
    {
      num_matches_ia = (rand() % 8);
      if (num_matches_ia == 0)
	num_matches_ia = 1;
      if (num_matches_ia > tab[num_lines_ia - 1] || num_matches_ia < 0)
        {
          check_matches_ia = 0;
        }
      else
        check_matches_ia = 1;
    }
  aff_ia(num_lines_ia, num_matches_ia);
  tab[num_lines_ia - 1] -= num_matches_ia;
  return (tab);
}
