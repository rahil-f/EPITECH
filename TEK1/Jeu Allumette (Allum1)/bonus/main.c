/*
** main.c for main.c in /home/rahil_f/rendu/CPE_2015_Allum1
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Sun Feb 21 12:23:47 2016 felix rahil
** Last update Sun Feb 21 13:30:10 2016 felix rahil
*/

#include "include/allum1.h"
#include "include/get_next_line.h"
#include "include/bonus.h"

int             finish(int *tab)
{
  int           i;

  i = 0;
  while (i != 4)
    {
      if (tab[i] != 0)
        return (1);
      i += 1;
    }
  return (0);
}

int	choice1(int *tab)
{
  print(tab);
  while (finish(tab) != 0)
    {
      my_putchar('\n');
      check_pyr(tab);
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
  my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
  return (0);
}

int	choice2(int *tab)
{
  print(tab);
  while (finish(tab) != 0)
    {
      my_putchar('\n');
      check_pyr(tab);
      print(tab);
      if (finish(tab) != 0)
	{
	  my_putchar('\n');
	  check_pyr(tab);
	  print(tab);
	}
      else
	{
	  my_putstr("You lost, too bad..\n");
	  return (0);
	}
    }
  my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
  return (0);
}

int	choice3(int *tab)
{
  print(tab);
  while (finish(tab) != 0)
    {
      my_putchar('\n');
      ia(tab);
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
  my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
  return (0);
}

int             main()
{
  int           tab[4];
  t_start	go;

  tab[0] = 1;
  tab[1] = 3;
  tab[2] = 5;
  tab[3] = 7;
  srand(time(0));
  start();
  go = jeu(go);
  if (go.choice_game == 1)
    choice1(tab);
  if (go.choice_game == 2)
    choice2(tab);
  if (go.choice_game == 3)
    choice3(tab);
  return (0);
}
