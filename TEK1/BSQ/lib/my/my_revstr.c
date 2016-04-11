/*
** my_revstr.c for my_revstr.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:45:42 2015 felix rahil
** Last update Sun Oct 18 12:51:32 2015 felix rahil
*/

char *my_revstr(char *str)
{
  int   length;
  int   actual;
  int   mem;

  actual = 0;
  length = 0;
  while (str[length] != '\0')
    {
      length = length + 1;
    }
  length = length - 1;
  while (actual < length)
    {
      mem = str[actual];
      str[actual] = str[length];
      str[length] = mem;
      actual = actual + 1;
      length = length - 1;
    }
  return (str);
}
