/*
** sudoki-bi_3.c for sudoki-bi_3.c in /home/rahil_f/rendu/sudoki-bi
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Feb 28 19:56:10 2016 felix rahil
** Last update Sun Feb 28 21:13:07 2016 felix grellard
*/

#include "include/sudoki.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check_map_2(char **map_2)
{
  int	i;
  int	j;

  i = 0;
  while (i != 11)
    {
      j = 0;
      while (j != 21)
	{
	  if (i > 0 && i < 10 && j > 0 && j < 19 
	      && j % 2 == 1 && map_2[i][j] != ' ')
	    return (-1);
	  if (i > 0 && i < 10 && j > 0 && j < 19 
 	      && j % 2 == 0 && (map_2[i][j] < '0' || map_2[i][j] > '9')
	      && map_2[i][j] != ' ')
	    return (-1);
	  j += 1;
	}
      i += 1;
    }
  return (0);
}

int	check_map_3(t_sol *test)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  while (i != 9)
    {
      j = 0;
      while (j != 9)
	{
	  k = 0;
	  while (k != 9)
	    {
	      if (test->map_nb[i][j] == test->map_nb[i][k] && k != j
		  && test->map_nb[i][j] >= '1' && test->map_nb[i][j] <= '9')
		return (-1);
	      k += 1;
	    }
	  j += 1;
	}
      i += 1;
    }
  return (0);
}

int	check_map_4(t_sol *test)
{
  int	i;
  int	j;
  int	k;

  j = 0;
  while (j != 9)
    {
      i = 0;
      while (i != 9)
	{
	  k = 0;
	  while (k != 9)
	    {
	      if (test->map_nb[i][j] == test->map_nb[k][j] && k != i
		  && test->map_nb[i][j] >= '1' && test->map_nb[i][j] <= '9')
		return (-1);
	      k += 1;
	    }
	  i += 1;
	}
      j += 1;
    }
  return (0);
}

int	check_block_2(t_sol *test, t_check_block *check)
{
  check->m = 0;
  check->n = 0;
  while (check->m != 3)
    {
      while (check->n != 3)
	{
	  if (test->map_nb[check->i + check->k][check->j + check->l] 
	      == test->map_nb[check->i + check->m][check->j + check->n]
	      && check->k != check->m && check->l != check->n
	      && test->map_nb[check->i + check->k][check->j + check->l] >= '1' 
	      && test->map_nb[check->i + check->k][check->j + check->l] <= '9')
	    return (-1);
	  check->n += 1;
	}
      check->n = 0;
      check->m += 1;
    }
  return (0);
}

int	check_block(t_sol *test, t_check_block *check)
{
  check->k = 0;
  check->l = 0;
  while (check->k != 3)
    {
      while (check->l != 3)
	{
	  if (check_block_2(test, check) == -1)
	    return (-1);
	  check->l += 1;
	}
      check->l = 0;
      check->k += 1;
    }
  return (0);
}
