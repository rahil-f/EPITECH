/*
** my_getnbr.c for my_getnbr.c in /home/rahil_f/rendu/Piscine_C_J07/lib/my
** 
** Made by felix rahil
** Login   <rahil_f@epitech.net>
** 
** Started on  Tue Oct  6 14:39:56 2015 felix rahil
** Last update Thu Oct 22 14:33:26 2015 felix rahil
*/

int	 my_getnbr(char *str)
{
  int   i;
  int   moins;
  int   nbr;

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
              i = i + 1;
            }
          if ((moins % 2) == 0)
            return (nbr);
          else
            return (nbr * (- 1));
        }
      i = i + 1;
    }
}
