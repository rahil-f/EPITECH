/*
** my_strcmp.c for my_strcmp.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 15:02:20 2015 felix rahil
** Last update Sun Oct 18 12:53:42 2015 felix rahil
*/

int	 my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while ((s1[i] != '\0') && (s2[i] != '\0'))
    {
      if (s1[i] > s2[i])
        {
          return (1);
        }
      else if (s1[i] < s2[i])
        {
          return (-1);
        }
      i = i + 1;
    }
  return (0);
}
