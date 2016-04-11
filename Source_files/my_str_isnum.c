/*
** my_str_isnum.c for my_str_isnum.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:10:42 2015 felix rahil
** Last update Sun Oct 18 14:22:00 2015 felix rahil
*/

int	 my_str_isnum(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= '0') && (str[i] <= '9'))
        i = i + 1;
      else
        return (0);
    }
  return (1);
}
