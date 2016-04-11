/*
** my_strcat.c for my_strcat.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:55:45 2015 felix rahil
** Last update Thu Nov  5 16:28:19 2015 felix rahil
*/

char	*my_strcat(char *dest, char *src)
{
  int   cd;
  int   cs;

  cd = 0;
  cs = 0;
  while (dest[cd] != '\0')
    {
      cd = cd + 1;
    }
  while (src[cs] != '\0')
    {
      dest[cd + cs] = src[cs];
      cs = cs + 1;
    }
  dest[cd + cs] = '\0';
  return (dest);
}
