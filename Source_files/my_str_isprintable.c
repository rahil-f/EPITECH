/*
** my_str_isprintable.c for my_str_isprintable.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:17:05 2015 felix rahil
** Last update Thu Oct 22 16:07:43 2015 felix rahil
*/

int	 my_str_isprintable(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= ' ') && (str[i] <= '~'))
        i = i + 1;
      else
        return (0);
    }
  return (1);
}
