/*
** server.c for server.c in /home/rahil_f/rendu/PSU_2015_minitalk/server
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Fri Feb  5 17:35:14 2016 felix rahil
** Last update Mon Feb  8 14:59:26 2016 felix rahil
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include "../include/minitalk.h"

void		my_put_server()
{
  my_putstr("PID: ");
  my_put_nbr(getpid());
  my_putchar('\n');
}

void		recive(int nb)
{
  static char	c = 0;
  static int	i = 7;

  if (nb == 0)
    i -= 1;
  else if (nb == 1)
    {
      c += 1 << i;
      i -= 1;
    }
  if (i < 0)
    {
      c += 1;
      my_putchar(-c);
      c = 0;
      i = 7;
    }
}

void		server(int sig)
{
  if (sig == SIGUSR1)
    recive(1);
  if (sig == SIGUSR2)
    recive(0);
}

int		main()
{
  my_put_server();
  if (signal(SIGUSR1, server) == SIG_ERR)
    {
      my_putstr("signal error\n");
      return (-1);
    }
  if (signal(SIGUSR2, server) == SIG_ERR)
    {
      my_putstr("signal error\n");
      return (-1);
    }
  while (42);
  return (0);
}
