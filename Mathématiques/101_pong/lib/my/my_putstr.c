/*
** my_putstr.c for putstr in /home/grella_c/rendu/Piscine_C_J04
** 
** Made by come grellard
** Login   <grella_c@epitech.net>
** 
** Started on  Thu Oct  1 16:42:10 2015 come grellard
** Last update Fri Oct  2 20:20:46 2015 come grellard
*/

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}
