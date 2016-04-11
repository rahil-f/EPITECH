/*
** my_putstr.c for my_putstr.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:23:14 2015 felix rahil
** Last update Thu Oct 22 13:57:22 2015 felix rahil
*/

int     my_putstr(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}
