/*
** sudoki-bi_2.c for sudoki-bi_2.c in /home/rahil_f/rendu/sudoki-bi
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Feb 28 19:54:12 2016 felix rahil
** Last update Sun Feb 28 19:54:15 2016 felix rahil
*/

#include "include/sudoki.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*get_map()
{
  int	read_bytes;
  char	*map;

  if ((map = malloc(232)) == NULL)
    return (NULL);
  map[231] = '\0';
  read_bytes = read(0, map, 231);
  if (read_bytes == -1)
    return (NULL);
  else if (read_bytes == 0)
    return (NULL);
  else if (read_bytes != 231)
    {
      printf("MAP ERROR\n\n");
      return (NULL);
    }
  return (map);
}

char	**new_map(char *map, char **map_2)
{
  int	i;
  int	j;
  int	k;

  if ((map_2 = malloc(sizeof(char *) * 12)) == NULL)
    return (NULL);
  map_2[11] = NULL;
  i = 0;
  while (i != 11)
    {
      if ((map_2[i] = malloc(sizeof(char) * 22)) == NULL)
	return (NULL);
      map_2[i][21] = '\0';
      i += 1;
    }
  k = 0;
  i = 0;
  while (i != 11)
    {
      j = 0;
      while (j != 21)
	  map_2[i][j++] = map[k++];
      i += 1;
    }
  return (map_2);
}

t_sol	*reload_map(char **map_2, t_sol *test)
{
  int	i;
  int	j;
  int	k;
  int	l;

  i = 1;
  j = 0;
  while (j != 10)
    {
      k = 0;
      l = 0;
      while (k != 21)
	{
	  if (map_2[i][k] <= '9' && map_2[i][k] >= '1')
	    test->map_nb[j][l++] = map_2[i][k];
	  else if (map_2[i][k] == ' ' && k % 2 == 0)
	    test->map_nb[j][l++] = map_2[i][k];
	  k += 1;
	}
      j += 1;
      i += 1;
    }
  return (test);
}

t_sol	*new_map_number(char **map_2, t_sol *test)
{
  int	i;

  if ((test = malloc(sizeof(t_sol))) == NULL)
    return (NULL);
  if ((test->map_nb = malloc(sizeof(char *) * 10)) == NULL)
    return (NULL);
  test->map_nb[9] = NULL;
  i = 0;
  while (i != 9)
    {
      if ((test->map_nb[i] = malloc(sizeof(char) * 10)) == NULL)
	return (NULL);
      test->map_nb[i][9] = '\0';
      i += 1;
    }
  test = reload_map(map_2, test);
  return (test);
}

int	check_map(char **map_2)
{
  int	i;
  int	j;

  i = 0;
  while (i != 11)
    {
      j = 0;
      while (j != 21)
	{
	  if ((j == 0 || j == 19) && map_2[i][j] != '|')
	    return (-1);
	  if (j == 20 && map_2[i][j] != '\n')
	    return (-1);
	  if ((i == 0 || i == 10) && j >= 1 && j <= 18 
	      && map_2[i][j] != '-')
	      return (-1);
	  j += 1;
	}
      i += 1;
    }
  return (0);
}
