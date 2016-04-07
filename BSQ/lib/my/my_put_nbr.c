/*
** my_put_nbr.c for my_put_nbr.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:21:17 2015 felix rahil
** Last update Wed Oct  7 11:16:06 2015 felix rahil
*/

int     my_put_nbr(int nb)
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
