/*
** my_strstr.c for my_strstr.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:47:05 2015 felix rahil
** Last update Mon Oct 19 09:07:46 2015 felix rahil
*/

char	*my_strstr(char *str, char *to_find)
{
  int   count_str;
  int   count_to_find;
  int   mem;

  count_str = 0;
  while (str[count_str] != '\0')
    {
      count_to_find = 0;
      while (str[count_str] != to_find[count_to_find])
        {
          if (str[count_str] == '\0')
            return (0);
          count_str = count_str + 1;
        }
      while (str[count_str] == to_find[count_to_find])
        {
          count_str = count_str + 1;
          count_to_find = count_to_find + 1;
          if (to_find[count_to_find] == '\0')
            {
              mem = count_str - count_to_find;
              return (&str[mem]);
            }
        }
    }
}
