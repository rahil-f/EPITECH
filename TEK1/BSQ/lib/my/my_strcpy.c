/*
** my_strcpy.c for  my_strcpy.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:30:15 2015 felix rahil
** Last update Tue Oct  6 14:33:01 2015 felix rahil
*/

char*   my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
