/*
** sudoki-bi_check.c for sudoki-bi_check.c in /home/rahil_f/rendu/sudoki-bi
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Feb 28 19:59:19 2016 felix rahil
<<<<<<< HEAD
** Last update Sun Feb 28 21:29:35 2016 felix rahil
=======
** Last update Sun Feb 28 20:58:28 2016 felix grellard
>>>>>>> 441e46e7b2c522cbbeabcedcbf5e7f8465000e07
*/

#include "include/sudoki.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	test_line(t_sol *test, int i, char k)
{
  int	j;

  j = 0;
  while (j < 9)
    {
      if (test->map_nb[i][j] == k)
	return (1);
      j += 1;
    }
  return (0);
}

int	test_col(t_sol *test, int j, char k)
{
  int	i;

  i = 0;
  while (i < 9)
    {
      if (test->map_nb[i][j] == k)
	return (1);
      i += 1;
    }
  return (0);
}

int	test_cube(t_sol *test, int i, int j, char k)
{
  int	i2;
  int	j2;

  i2 = 3 * (i / 3);
  j2 = 3 * (j / 3);
  i = i2;
  while(i < (i2 + 3))
    {
      j = j2;
      while (j < (j2 + 3))
	{
	  if (test->map_nb[i][j] == k)
	    return (1);
	  j += 1;
	}
      i += 1;
    }
  return (0);
}

int	soluce(t_sol *test, int pos)
{
  char	k;
  int	i;
  int	j;

  k = '1';
  if (pos == 81)
    return (0);
  i = pos / 9;
  j = pos % 9;
  if (test->map_nb[i][j] != ' ')
    return (soluce(test, pos + 1));
  while (k <= '9')
    {
      if (test_line(test, i, k) == 0 && test_col(test, j, k) == 0 && 
	  test_cube(test, i, j, k) == 0)
	{
	  test->map_nb[i][j] = k;
	  if ((soluce(test, pos + 1)) == 0)
	    return (0);
	}
      k += 1;
    }
  test->map_nb[i][j] = ' ';
  return (1);
}
