/*
** my_putnbr2.c for put nbr in /home/grella_c/rendu/test_exercisesJ04
** 
** Made by come grellard
** Login   <grella_c@epitech.net>
** 
** Started on  Thu Oct  1 18:56:03 2015 come grellard
** Last update Fri Oct 23 15:24:51 2015 come grellard
*/

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else 
    {
      my_putchar(nb + 48);
    }
}
