/*
** my_swap.c for my_swap.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:25:53 2015 felix rahil
** Last update Wed Oct  7 11:15:08 2015 felix rahil
*/

int     my_swap(int *a, int *b)
{
  char  c;

  c = *a;
  *a = *b;
  *b = c;
}
