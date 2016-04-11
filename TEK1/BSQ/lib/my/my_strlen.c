/*
** my_strlen.c for my_strlen.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:27:42 2015 felix rahil
** Last update Wed Oct  7 11:02:47 2015 felix rahil
*/

int     my_strlen(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}
