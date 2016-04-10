/*
** my_putchar_err.c for erreurs standard in /home/grella_c/rendu/test_exercisesJ12
** 
** Made by come grellard
** Login   <grella_c@epitech.net>
** 
** Started on  Wed Oct 14 17:59:05 2015 come grellard
** Last update Wed Oct 14 18:02:24 2015 come grellard
*/

void	my_putchar_err(char c)
{
  write(2, &c, 1);
}
