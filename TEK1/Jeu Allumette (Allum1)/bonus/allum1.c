/*
** allum1.c for allum1.c in /home/rahil_f/rendu/CPE_2015_Allum1
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Mon Feb  8 15:18:27 2016 felix rahil
** Last update Sun Feb 21 13:10:27 2016 felix rahil
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/allum1.h"
#include "include/get_next_line.h"

void            print(int *tab)
{
  int           i;
  int           j;
  int           k;

  i = 0;
  my_putstr("*********\n");
  while (i != 4)
    {
      j = 0;
      my_putchar('*');
      while (j++ != (3 - i))
        my_putchar(' ');
      k = 0;
      while (k != tab[i])
        {
          my_putchar('|');
          j += 1;
          k += 1;
        }
      while (j++ != 8)
        my_putchar(' ');
      my_putstr("*\n");
      i += 1;
    }
  my_putstr("*********\n");
}

t_check		line(int *tab, t_check check, char *lines)
{
  while (check.check_lines == 0)
    {
      my_putstr("line: ");
      lines = get_next_line(0);
      check.num_lines = my_getnbr(lines);
      if (check.num_lines < 0)
	{
	  my_putstr("Error: invalid input (positive number expected)\n");
	  check.check_lines = 0;
	}
      else if (check.num_lines > 4 || check.num_lines == 0)
	{
	  my_putstr("Error: this line is out of range\n");
	  check.check_lines = 0;
	}
      else if (tab[check.num_lines - 1] == 0)
	{
	  my_putstr("Error: this line is empty\n");
	  check.check_lines = 0;
	}
      else
	check.check_lines = 1;
    }
  return (check);
}

t_check		matche(int *tab, t_check check)
{
  char		*matches;

  my_putstr("matches: ");
  matches = get_next_line(0);
  check.num_matches = my_getnbr(matches);
  if (check.num_matches < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      check.check_all = 0;
      check.check_lines = 0;
    }
  else if (check.num_matches == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      check.check_all = 0;
      check.check_lines = 0;
    }
  else if(check.num_matches > tab[check.num_lines - 1])
    {
      my_putstr("Error: not enough matches on this line\n");
      check.check_all = 0;
      check.check_lines = 0;
    }
  return (check);
}

void		aff(t_check check)
{
  my_putstr("Player removed "); 
  my_put_nbr(check.num_matches); 
  my_putstr(" match(es) from line ");
  my_put_nbr(check.num_lines);
  my_putchar('\n');
}

int		*check_pyr(int *tab)
{
  t_check	check;
  char		*lines;
  char		*matches;

  check.check_matches = 0;
  check.check_lines = 0;
  check.check_all = 0;
  my_putstr("Your turn: \n");
  while (check.check_all == 0)
    {
      check.check_all = 1;
      check = line(tab, check, lines);
      check = matche(tab, check);
    }     
  aff(check);
  tab[check.num_lines - 1] -= check.num_matches;
  return (tab);
}
