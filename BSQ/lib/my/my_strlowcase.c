/*
** my_strlowcase.c for my_strlowcase.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:33:08 2015 felix rahil
** Last update Mon Oct 19 09:29:54 2015 felix rahil
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 41 && str[i] <= 90)
        {
          str[i] = str[i] + 32;
          i = i + 1;
        }
      else
        i = i + 1;
    }
  return (str);
}
