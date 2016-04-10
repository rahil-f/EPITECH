/*
** my_putchar.c for putchar in /home/grella_c/rendu/lib
** 
** Made by come grellard
** Login   <grella_c@epitech.net>
** 
** Started on  Tue Oct  6 11:06:30 2015 come grellard
** Last update Tue Oct  6 11:07:13 2015 come grellard
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
