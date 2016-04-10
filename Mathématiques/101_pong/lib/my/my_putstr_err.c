/*
** my_putstr_err.c for erreurs standards in /home/grella_c/rendu/test_exercisesJ12
** 
** Made by come grellard
** Login   <grella_c@epitech.net>
** 
** Started on  Wed Oct 14 17:56:57 2015 come grellard
** Last update Wed Oct 14 17:58:28 2015 come grellard
*/

int	my_putstr_err(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar_err(str[a]);
      a = a + 1;
    }
}
