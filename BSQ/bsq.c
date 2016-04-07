/*
** bsq.c for bsq.c in /home/rahil_f/rendu/CPE_2015_bsq
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Mon Dec 14 21:31:52 2015 felix rahil
** Last update Wed Dec 30 14:39:17 2015 felix rahil
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include.h"

char		*cut_map(char *map)
{
  int		i;

  i = 0;
  while (map[i] != '\n')
    i = i + 1;
  map = map + i + 1;
  return (map);
}

t_find		find_cube(int **mem, int lines, int cols)
{
  t_find	square;
  int		i;
  int		j;

  i = 0;
  j = 0;
  square.i = i;
  square.j = j;
  square.size = mem[i][j];
  while (i != lines)
    {
      j = 0;
      while (j != cols)
	{
	  if (square.size < mem[i][j])
	    {
	      square.size = mem[i][j];
	      square.i = i;
	      square.j = j;
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  return (square);
}

t_norme		draw_bis(int **mem, t_norme norme)
{
  if (mem[norme.i][norme.j] == 0)
    norme.finish[norme.k] = 'o';
  else if (norme.i >= norme.square.i && norme.i < (norme.square.i + norme.square.size)
	   && norme.j == norme.square.j)
    {
      while (norme.j != norme.square.j + norme.square.size)
	{
	  norme.finish[norme.k] = 'x';
	  norme.j = norme.j + 1;
	  norme.k = norme.k + 1;
	}
      norme.j = norme.j - 1;
      norme.k = norme.k - 1;
    }
  else
    norme.finish[norme.k] = '.';
  norme.j = norme.j + 1;
  norme.k = norme.k + 1;	  
  return (norme);
}

void		draw(int **mem, int lines, int cols, t_find square)
{
  t_norme	norme;

  norme.k = 0;
  norme.i = 0;
  norme.finish = malloc(lines * (cols + 1));
  norme.square = square;
  while (norme.i != lines)
    {
      norme.j = 0;
      while (norme.j != cols)
	{
	  norme = draw_bis(mem, norme);
	}
      norme.finish[norme.k] = '\n';
      norme.i = norme.i + 1;
      norme.k = norme.k + 1;
    }
  write(1, norme.finish, my_strlen(norme.finish));
}

void		my_putstr_int(int **str, int lines, int cols)
{
  int		i;
  int		j;

  i = 0;
  while (i != lines)
    {
      j = 0;
      while (j != cols)
	{
	  my_put_nbr(str[i][j]);
	  j = j + 1;
	}
      my_putchar('\n');
      i = i + 1;
    }
}
