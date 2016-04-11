/*
** my_strncat.c for my_strncat.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:38:50 2015 felix rahil
** Last update Sun Oct 18 14:31:45 2015 felix rahil
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int   cd;
  int   cs;

  cd = 0;
  cs = 0;
  while (dest[cd] != '\0')
    {
      cd = cd + 1;
    }
  while (cs < nb && src[cs] != '\0')
    {
      dest[cd + cs] = src[cs];
      cs = cs + 1;
    }
  dest[cd + cs] = '\0';
  return (dest);
}
