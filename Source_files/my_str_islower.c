/*
** my_str_islower.c for my_str_islower.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:09:17 2015 felix rahil
** Last update Sun Oct 18 14:23:40 2015 felix rahil
*/

int	 my_str_islower(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
        i = i + 1;
      else
        return (0);
    }
  return (1);
}
