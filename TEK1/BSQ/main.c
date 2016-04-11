/*
** main.c for main.c in /home/rahil_f/rendu/CPE_2015_BSQ
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Dec 20 19:30:18 2015 felix rahil
** Last update Tue Dec 22 13:15:17 2015 felix rahil
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include.h"

int             main(int argc, char **argv)
{
  char          *map;
  int           lines;
  int           cols;
  int           **mem;
  int           **dem;
  t_find        square;

  if (argc != 2)
    {
      my_putstr("usage: ./bsq map\n");
      return (-1);
    }
  map = get_map(argv[1]);
  lines = count_lines(map);
  map = cut_map(map);
  cols = count_cols(map);
  mem = change(map, lines, cols);
  dem = demin(mem, lines, cols);
  square = find_cube(mem, lines, cols);
  draw(mem, lines, cols, square);
  return (0);
}
