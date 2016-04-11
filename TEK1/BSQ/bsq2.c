/*
** bsq2.c for bsq2.c in /home/rahil_f/rendu/CPE_2015_BSQ
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Dec 20 19:21:58 2015 felix rahil
** Last update Wed Dec 30 14:51:50 2015 felix rahil
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include.h"

char		*get_map(char *filepath)
{
  int           file;
  int           size;
  int           read_bytes;
  char          *map;
  struct stat   sb;

  stat(filepath, &sb);
  file = open(filepath, O_RDONLY);
  if (file == -1)
    {
      my_putstr("error: open failed\n");
      return (NULL);
    }
  size = sb.st_size;
  map = malloc(size);
  read_bytes = read(file, map, size);
  if (read_bytes == -1)
    {
      my_putstr("error: read failed\n");
      return (NULL);
    }
  return (map);
}

int             count_lines(char *map)
{
  int           i;
  int           lines;
  char          *nb_lines;

  i = 0;
  while (map[i] != '\n')
    {
      i = i + 1;
    }
  nb_lines = malloc(i);
  if (nb_lines == NULL)
    {
      my_putstr("error: malloc failed\n");
      return (-1);
    }
  i = 0;
  while (map[i] != '\n')
    {
      nb_lines[i] = map[i];
      i = i + 1;
    }
  lines = my_getnbr(nb_lines);
  return (lines);
}

int             count_cols(char *map)
{
  int           i;

  i = 0;
  while (map[i] != '\n')
    {
      i = i + 1;
    }
  return (i);
}

int             **change(char *map, int lines, int cols)
{
  int		**mem;
  int           i;
  int           j;
  int           k;

  k = 0;
  mem = malloc(sizeof(int *) * (lines + 1));
  i = 0;
  while (i != lines)
    {
      mem[i] = malloc(sizeof(int) * cols);
      i = i + 1;
    }
  i = 0;
  while (i != lines)
    {
      j = 0;
      while (j != cols)
        {
          if (map[k] == '.')
            mem[i][j] = 1;
          k = k + 1;
          j = j + 1;
        }
      i = i + 1;
      k = k + 1;
    }
  return (mem);
}

int             **demin(int **mem, int lines, int cols)
{
  int           i;
  int           j;
  int           min;

  i = lines - 2;
  while (i >= 0)
    {
      j = cols - 2;
      while (j >=  0)
        {
          if (mem[i][j] != 0)
            {
              min = mem[i][j + 1];
              if (min > mem[i + 1][j + 1])
                min = mem[i + 1][j + 1];
              if (min > mem[i + 1][j])
                min = mem[i + 1][j];
              mem[i][j] = mem[i][j] + min;
            }
          j = j - 1;
        }
      i = i - 1;
    }
  return (mem);
}
