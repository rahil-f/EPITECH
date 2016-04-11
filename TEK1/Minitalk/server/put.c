/*
** put.c for put.c in /home/rahil_f/rendu/PSU_2015_minitalk/server
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Mon Feb  8 12:30:13 2016 felix rahil
** Last update Mon Feb  8 14:58:29 2016 felix rahil
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr (nb % 10);
    }
  else
    {
      my_putchar(nb + 48);
    }
}
