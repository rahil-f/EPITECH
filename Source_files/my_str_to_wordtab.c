/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/rahil_f/rendu/PSU_2015_minishell2
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sat Apr  9 10:34:32 2016 felix rahil
** Last update Sun Apr 10 13:14:42 2016 felix rahil
*/

#include <stdlib.h>

char	**my_str_to_wordtab(char *str)
{
  char **last_str;
  int	i;
  int	j;
  int	k;
  int	space;
  int	word;

  space = 1;
  word = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	space += 1;
      else
	word += 1;
      i += 1;
    }
  last_str = malloc(sizeof(char *) * (space + 1));
  last_str[space] = NULL;
  i = 0;
  while (i != space)
    {
      last_str[i] = malloc(sizeof(char) * (word + 1));
      last_str[i][word] = '\0';
      i += 1;
    }
  i = 0;
  j = 0;
  k = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
        {
          j += 1;
          k = 0;
        }
      else
        {
          last_str[j][k] = str[i];
          k += 1;
        }
      i += 1;
    }
  return (last_str);
}
