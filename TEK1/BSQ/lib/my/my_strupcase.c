/*
** my_strupcase.c for my_strupcase.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:50:08 2015 felix rahil
** Last update Thu Oct 22 15:36:45 2015 felix rahil
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
        {
          str[i] = str[i] - 32;
          i = i + 1;
        }
      else
        i = i + 1;
    }
  return (str);
}
