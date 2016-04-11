/*
** my_strncpy.c for char    *my_strncpy(char *dest, char *src, int n) in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:34:09 2015 felix rahil
** Last update Tue Oct  6 14:34:53 2015 felix rahil
*/

char    *my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while (i <= n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
