/*
** put.c for put.c in /home/rahil_f/rendu/CPE_2015_Allum1
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Mon Feb  8 16:01:38 2016 felix rahil
** Last update Sun Feb 21 13:13:14 2016 felix rahil
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int      my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while ((s1[i] != '\0') && (s2[i] != '\0'))
    {
      if (s1[i] > s2[i])
        return (1);
      else if (s1[i] < s2[i])
        return (-1);
      i = i + 1;
    }
  return (0);
}

void    my_putstr(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}

int     getnbr_bis(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
        i += 1;
      else
        return (-1);
    }
  return (0);
}

int     my_getnbr(char *str)
{
  int   i;
  int   moins;
  int   nbr;

  moins = 0;
  nbr = 0;
  i = 0;
  if (getnbr_bis(str) == 0)
    {
      while (str[i] != '\0')
	{
	  if (str[i] >= '0' && str[i] <= '9')
	    {
	      while (str[i] >= '0' && str[i] <= '9')
		{
		  nbr = str[i] - 48 + nbr * 10;
		  i += 1;
		}
	      return (nbr);
	    }
	  return (-1);
	}
    }     
  return (-1);
}

  void    my_put_nbr(int nb)
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
