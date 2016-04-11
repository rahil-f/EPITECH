/*
** my_strcapitalize.c for my_strcapitalize.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:53:33 2015 felix rahil
** Last update Thu Oct 22 15:53:44 2015 felix rahil
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
      while ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) ||
             (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
        {
          i = i + 1;
          if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
          i = i + 1;
        }
      i = i + 1;
    }
  return (str);
}
