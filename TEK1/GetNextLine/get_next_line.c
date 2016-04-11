/*
** get_next_line.c for get_next_line.c in /home/rahil_f/rendu/CPE_2015_getnextline
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Thu Jan 14 17:12:02 2016 felix rahil
** Last update Tue Mar  1 16:30:41 2016 felix rahil
*/

#include <stdlib.h>
#include "get_next_line.h"

char		*cut_line(char *buffer, char **stock)
{
  char		*final_buffer;
  int		i;
  int		a;

  a = 0;
  i = 0;
  while (buffer[i] != '\n')
    i = i + 1;
  final_buffer = malloc(i + 1);
  while (buffer[i++] != '\0')
    a = a + 1;
  stock[0] = malloc(a + 1);
  i = 0;
  a = 0;
  while (buffer[i] != '\n')
    final_buffer[i] = buffer[i++];
  final_buffer[i] = '\0';
  i = i + 1;
  while (buffer[i] != '\0')
    stock[0][a++] = buffer[i++];
  stock[0][a] = '\0';
  return (final_buffer);
}

int		check(char *buffer)
{
  int		i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
        return (1);
      i = i + 1;
    }
  return (0);
}

int		count_stock(char *stock)
{
  int		i;

  i = 0;
  while (stock[i] != '\0')
    i = i + 1;
  return (i);
}

char		*reload_buffer(char *buffer, char *rd)
{
  char		*final_buffer;
  int		buffer_count;
  int		rd_count;

  buffer_count = 0;
  rd_count = 0;
  while (buffer[buffer_count] != '\0')
    buffer_count = buffer_count + 1;
  while (rd[rd_count] != '\0')
    rd_count = rd_count + 1;
  final_buffer = malloc(buffer_count + rd_count + 1);
  buffer_count = 0;
  rd_count = 0;
  while (buffer[buffer_count] != '\0')
    final_buffer[buffer_count] = buffer[buffer_count++];
  while (rd[rd_count] != '\0')
    final_buffer[buffer_count + rd_count] = rd[rd_count++];
  final_buffer[buffer_count + rd_count] = '\0';
  return (final_buffer);
}

char		*get_next_line(const int fd)
{
  static char	*stock = NULL;
  char		*rd;
  char		*buffer;
  int		i;
  int		verif;

  i = 0;
  if ((rd = malloc(READ_SIZE + 1)) == NULL)
    return (NULL);
  if (stock == NULL)
    {
      if ((stock = malloc(1)) == NULL)
	return (NULL);
      stock[0] = '\0';
    }
  if ((buffer = malloc(count_stock(stock) + 1)) == NULL)
    return (NULL);
  while (stock != NULL && stock[i] != '\0')
      buffer[i] = stock[i++];
  buffer[i] = '\0';
  while (check(buffer) != 1)
    {
      if ((verif = read(fd, rd, READ_SIZE)) == 0 || verif == -1)
	return (NULL);
      rd[READ_SIZE] = '\0';
      buffer = reload_buffer(buffer, rd);
    }
  buffer = cut_line(buffer, &stock);
  return (buffer);
}
