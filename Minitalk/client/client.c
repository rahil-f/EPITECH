/*
** client.c for client.c in /home/rahil_f/rendu/PSU_2015_minitalk/client
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sat Feb  6 04:10:28 2016 felix rahil
** Last update Tue Feb  9 10:35:55 2016 felix rahil
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int	my_getnbr(char *str)
{
  int	i;
  int	moins;
  int	nbr;

  i = 0;
  moins = 0;
  nbr = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
        moins = moins + 1;
      if (str[i] >= '0' && str[i] <= '9')
        {
          while (str[i] >= '0' && str[i] <= '9')
            {
              nbr = str[i] - 48 + nbr * 10;
              i += 1;
            }
          if ((moins % 2) == 0)
            return (nbr);
          else
            return (nbr * (- 1));
        }
      i += 1;
    }
  return (0);
}

void	char_to_bin(int pid, char *str)
{
  int	i;
  int	j;

  j = 0;
  while (str[j] != '\0')
    {
      i = 7;
      while (i >= 0)
        {
          if (((str[j] >> i) % 2) == 0)
            kill(pid, SIGUSR1);
          else
            kill(pid, SIGUSR2);
          i -= 1;
          usleep(500);
        }
      j += 1; 
    }
}

int	main(int argc, char **argv)
{
  if (argc == 3)
    char_to_bin(my_getnbr(argv[1]), argv[2]);
  return (0);
}
