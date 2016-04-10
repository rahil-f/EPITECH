/*
** 101pong.c for 101pong in /home/grella_c/rendu/101pong
**
** Made by come grellard
** Login   <grella_c@epitech.net>
**
** Started on  Mon Nov  9 12:31:09 2015 come grellard
** Last update Sun Apr 10 20:46:27 2016 felix rahil
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int	pong(float x0, float y0, float z0, float x1, float y1, float z1, int n)
{
  float	xs;
  float	ys;
  float	zs;
  float	xc;
  float	yc;
  float	zc;
  float angle;

  xs = x1 - x0;
  ys = y1 - y0;
  zs = z1 - z0;
  printf("The speed vector coordinates are :\n");
  printf("(%.2f;%.2f;%.2f)\n", xs, ys, zs);
  xc = x1 + (x1 - x0) * n;
  yc = y1 + (y1 - y0) * n;
  zc = z1 + (z1 - z0) * n;
  printf("At time t+%d, ball coordinates will be :\n", n);
  printf("(%.2f;%.2f;%.2f)\n", xc, yc, zc);
  if ((z0 <= 0 && z1 <= 0) || (z0 >= 0 && z1 >= 0))
    {
      angle = ((acos(zs / sqrt(pow(xs, 2) + pow(ys, 2) + pow(zs, 2)))) * 180) / M_PI;
      if (angle > 90 || angle < 0)
	angle = fabs(90 - angle);
      printf("The incidence angle is :\n%.2f degrees\n", angle);
    }
  else
    printf("The ball won't reach the bat.\n");
  return (0);
} 

int	main(int ac, char **av)
{
  float x0;
  float y0;
  float z0;
  float x1;
  float y1;
  float z1;
  int	n;
  int	i;
  int	j;

  i = 0;
  if (ac != 8)
    {
      my_putstr_err("Usage: ./101pong x0 y0 z0 x1 y1 z1 n\n");
      return (84);
    }
  while (av[7][i] != '\0')
    {
      if (av[7][i] >= '0' && av[7][i] <= '9')
	i = i + 1;
      else
	{
	  my_putstr_err("Usage: n doit etre un entier positif ou nul.\n");
	  return (84);
	}
    }
  i = 0;
  j = 1;
  while (j <= 7)
    {
      while (av[j][i] != '\0')
	{
	  if ((av[j][i] >= '0' && av[j][i] <= '9') || av[j][i] == '.' || av[j][i] == '-')
	    i = i + 1;
	  else
	    {
	      my_putstr_err("Usage: les parametres doivent tous etre des nombres.\n");
	      return (84);
	    }
	}
      j = j + 1;
      i = 0;
    }
  x0 = atof(av[1]);
  y0 = atof(av[2]);
  z0 = atof(av[3]);
  x1 = atof(av[4]);
  y1 = atof(av[5]);
  z1 = atof(av[6]);
  n = atoi(av[7]);
  pong(x0, y0, z0, x1, y1, z1, n);
  return (0);
}
