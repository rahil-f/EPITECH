/*
** main.c for main.c in /home/rahil_f/rendu/CPE_2015_Allum1
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Feb 21 12:23:47 2016 felix rahil
** Last update Fri Feb 26 11:34:24 2016 felix rahil
*/

#include <stdlib.h>
#include "include/allum1.h"
#include "include/get_next_line.h"

int	finish(int *tab)
{
  int	i;

  i = 0;
  while (i != 4)
    {
      if (tab[i] != 0)
        return (1);
      i += 1;
    }
  return (0);
}

int	main_bis(int *tab)
{
  print(tab);
  while (finish(tab) != 0)
    {
      my_putchar('\n');
      if ((check_pyr(tab)) == 0)
	return (0);
      print(tab);
      if (finish(tab) != 0)
        {
          my_putchar('\n');
          ia(tab);
          print(tab);
        }
      else
        {
          my_putstr("You lost, too bad..\n");
          return (0);
        }
    }
  my_putstr("I lost.. snif.. but I'll get you next time!!\n");
}

int	main()
{
  int	tab[4];

  tab[0] = 1;
  tab[1] = 3;
  tab[2] = 5;
  tab[3] = 7;
  srand(time(0));
  main_bis(tab);
  return (0);
}
