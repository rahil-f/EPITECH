/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:50:22 2015 felix rahil
** Last update Mon Oct 19 09:26:04 2015 felix rahil
*/

void	 my_sort_int_tab(int *tab, int size)
{
  int   i;
  int   j;
  int   k;


  i = 0;
  j = 1;
  k = 0;
  while (tab[j] != size + 1)
    {
      if (tab[i] > tab[j])
        {
          my_swap(tab[i], tab[j]);
          i = 0;
          j = 1;
        }
      else
        {
          i = i + 1;
          j = j + 1;
        }
    }
  while (tab[k] != size + 1)
    {
      my_put_nbr(tab[k]);
      k = k + 1;
    }
  my_putchar('\n');
}
