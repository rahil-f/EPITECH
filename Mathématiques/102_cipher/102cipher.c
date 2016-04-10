/* 
** 102cipher.c for 102cipher in /home/grella_c/rendu/Maths/102cipher
** 
** Made by come grellard
** Login   <grella_c@epitech.net>
** 
** Started on  Mon Nov 23 14:15:46 2015 come grellard
** Last update Sun Apr 10 20:46:59 2016 felix rahil
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

int	disp_encrypted_message(int *k_matrix, int *m_matrix, int len, int nb)
{
  int	c_m;
  int	c_m_init;
  int	c_k;
  int	c_k_init;
  int	nb_matrix;
  int	i;
  int	count_nb;
  int	space;

  c_m = 0;
  c_m_init = 0;
  c_k = 0;
  c_k_init = 0;
  i = 0;
  count_nb = 0;
  space = 0;
  my_putstr("Encrypted message :\n");
  while (i != len)
    {
      nb_matrix = 0;
      c_k = c_k_init;
      while (count_nb < nb)
	{
	  nb_matrix = nb_matrix + m_matrix[c_m] * k_matrix[c_k];
	  c_m += 1;
	  c_k += nb;
	  count_nb = count_nb + 1;
	}
      if (space != 0)
	my_putchar(' ');
      space = 1;
      my_put_nbr(nb_matrix);
      count_nb = 0;
      c_k_init = c_k_init + 1;
      c_m = c_m - nb;
      if (c_k_init == nb)
	{
	  c_k_init = 0;
	  c_m += nb;
	}
      i = i + 1;
    }
  my_putchar('\n');
  return (0);
}

int	len_message_matrix(int *m_matrix)
{
  int	count;

  while (m_matrix[count] != 200)
    {
      count = count + 1;
    }
  return (count);
}

int	*message_in_matrix(int ac, char **av, int nb)
{
  int	*message_matrix;
  int	i;
  int	len;

  i = 0;
  len = my_strlen(av[1]);
  message_matrix = malloc(sizeof(int) * my_strlen(av[1]) + 2);
  while (av[1][i] != '\0')
    {
      message_matrix[i] = av[1][i];
      i = i + 1;
    }
  while (len % nb != 0)
    {
      message_matrix[i] = 0;
      i = i + 1;
      len = len + 1;
    }
  message_matrix[i] = 200;
  return (message_matrix);
}

int	*disp_key(int ac, char **av, int nb)
{
  int	*key_matrix;
  int	c_nb;
  int	idx;
  int	i;

  c_nb = 1;
  idx = 0;
  i = 0;
  key_matrix = malloc(sizeof(int) * (nb * nb));
  my_putstr("Key matrix :\n");
  while (c_nb <= nb * nb)
    {
      if (av[2][idx] != '\0')
	{
	  key_matrix[i] = av[2][idx];
	  my_put_nbr(av[2][idx]);
	  idx = idx + 1;
	  i = i + 1;
	}
      else
	{
	  key_matrix[i] = 0;
	  my_putchar('0');
	  i = i + 1;
	}
      if (c_nb % nb == 0)
	{
	  my_putchar('\n');
	}
      else
	{
	  my_putchar('\t');
	}
      c_nb = c_nb + 1;
    }
  my_putchar('\n');
  return (key_matrix);
}

int	decrypt(int ac, char **av)
{
  return (0);
}

int	encrypt(int ac, char **av)
{
  int	nb;
  int	len_m_matrix;
  int	i;
  int	*key_matrix;
  int	*message_matrix;

  if (my_strlen(av[2]) <= 4)
    {
      nb = 2;
      key_matrix = disp_key(ac, av, nb);
    }
  else if (my_strlen(av[2]) <= 9)
    {
      nb = 3;
      key_matrix = disp_key(ac, av, nb);
    }
  else
    {
      my_putstr_err("Usage: la key ne doit pas depasser les 9 caractères.\n");
      return (84);
    }
  message_matrix = message_in_matrix(ac, av, nb);
  len_m_matrix = len_message_matrix(message_matrix);
  disp_encrypted_message(key_matrix, message_matrix, len_m_matrix, nb);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 4)
    {
      my_putstr_err("Usage: ./102cipher message key flag\n");
      return (84);
    }
  if (av[3][0] == '0')
    encrypt(ac, av);
  else if (av[3][0] == '1')
    decrypt(ac, av);
  else
    {
      my_putstr_err("Usage: le flag doit être égal à 0 ou 1.\n");
      return (84);
    }
  return (0);
}
