/*
** my_str_isupper.c for my_str_isupper.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:23:47 2015 felix rahil
** Last update Sun Oct 18 14:27:10 2015 felix rahil
*/

int	 my_str_isupper(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'A') && (str[i] <= 'Z'))
        i = i + 1;
      else
        return (0);
    }
  return (1);
}
