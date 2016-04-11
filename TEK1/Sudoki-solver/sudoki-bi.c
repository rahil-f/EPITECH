/*
** sudoki-bi.c for sudoki-bi.c in /home/rahil_f/rendu/sudoki-bi
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Feb 28 19:50:46 2016 felix rahil
** Last update Sun Feb 28 21:18:28 2016 felix grellard
*/

#include "include/sudoki.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	check_map_5(t_sol *test)
{
  t_check_block	*check;

  if ((check = malloc(sizeof(t_check_block))) == NULL)
    return (-1);
  check->i = 0;
  check->j = 0;
  while (check->i != 9)
    {
      check->j = 0;
      while (check->j != 9)
	{
	  if ((check_block(test, check)) == -1)
	    return (-1);
	  check->j += 3;
	}
      check->i += 3;
    }
  return (0);
}

void	imposible_map(char **map_2)
{
  int	i;
  int	j;

  i = 0;
  while (i != 11)
    {
      j = 0;
      while (j != 21)
	{
	  if ((map_2[i][j] >= '1' && map_2[i][j] <= '9') 
	      || (map_2[i][j] == ' ' && j % 2 == 0))
	    map_2[i][j] = 'X';
	  j += 1;
	}
      i += 1;
    }
  i = 0;
  while (i != 11)
    printf("%s", map_2[i++]);
}

void	display_map(t_sol *test)
{
  int	i;
  int	j;

  printf("|------------------|\n");
  i = 0;
  while (i != 9)
    {
      j = 0;
      printf("|");
      while (j != 9)
	{
	  printf(" %c", test->map_nb[i][j]);
	  j += 1;
	}
      printf("|\n");
      i += 1;
    }
  printf("|------------------|\n");
}

t_sol	*main_bis(char **map_2, t_sol *test)
{
  if ((check_map(map_2)) == -1 || (check_map_2(map_2)) == -1)
    {
      printf("MAP ERROR\n\n");
      return (NULL);
    }
  else if ((test = new_map_number(map_2, test)) == NULL)
    return (NULL);
  else if ((check_map_3(test)) == -1 || (check_map_4(test)) == -1
      || (check_map_5(test)) == -1)
    imposible_map(map_2);
  else if (soluce(test, 0) == 1)
    imposible_map(map_2);
  else
    display_map(test);
  return (test);
}

int	main()
{
  char	*map;
  char	**map_2;
  t_sol	*test;
  int	i;

  i = 0;
  while (42)
    {
      if ((test = malloc(sizeof(t_sol))) == NULL)
	return (-1);
      map_2 = NULL;
      test->map_nb = NULL;
      if ((map = get_map()) == NULL)
	return (-1);
      if (i++ != 0)
	printf("####################\n");
      if ((map_2 = new_map(map, map_2)) == NULL)
	return (-1);
      if ((test = main_bis(map_2, test)) == NULL)
	return (-1);
    }
  return (0);
}
