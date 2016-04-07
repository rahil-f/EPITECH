/*
** notice.c for notice.c in /home/rahil_f/rendu/CPE_2015_Allum1/bonus
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Mon Feb 15 20:17:59 2016 felix rahil
** Last update Sun Feb 21 13:34:29 2016 felix rahil
*/

#include "include/allum1.h"
#include "include/get_next_line.h"
#include "include/bonus.h"


void	start()
{
  my_putstr("Binvenue dans le jeu de l'allum1!\n");
  my_putstr("Règle du jeu :\n");
  my_putstr("Il y a 4 lignes qui contiennent un nombre d'allumette predefini");
  my_putstr(", il faut choisir la lignes puis retirer");
  my_putstr(" le nombre d'allumette que vous souaitez.\n");
  my_putstr("celui qui retire la derniere allumette perd/n");
  my_putstr("Bon jeu!!!\n");
}

t_start	jeu(t_start go)
{
  go.check_game = 0;
  go.choice_game = 0;
  my_putstr("Veuillez choisir le jeu (joueur vs ia(1),");
  my_putstr(" joueur vs joueur(2), ia vs ia(3)): ");
  go.game = get_next_line(0);
  while (go.check_game == 0)
    {
      go.check_game = 1;
      if (my_strcmp(go.game, "joueur vs ia") == 0 || my_strcmp(go.game, "1") == 0)
	{
	  go.choice_game = 1;
	}
      else if (my_strcmp(go.game, "joueur vs joueur") == 0 || my_strcmp(go.game, "2") == 0)
	{
	  go.choice_game = 2;
	}
      else if (my_strcmp(go.game, "ia vs ia") == 0 || my_strcmp(go.game, "3") == 0)
	{
	  go.choice_game = 3;
	}
      else 
	{
	  my_putstr("joueur vs ia, joueur vs joueur, ia vs ia: ");
	  go.game = get_next_line(0);
	  go.check_game = 0;
	}
    }
  return (go);
}
