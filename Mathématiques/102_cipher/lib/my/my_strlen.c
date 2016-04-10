/*
** my_strlen.c for strlen in /home/grella_c/rendu/test_exercisesJ05
** 
** Made by come grellard
** Login   <grella_c@epitech.net>
** 
** Started on  Fri Oct  2 19:35:55 2015 come grellard
** Last update Sat Oct  3 08:48:07 2015 come grellard
*/

int	my_strlen(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}
