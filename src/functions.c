/*
** functions.c for navy in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Mon Feb  6 18:25:35 2017 Simon LEJEUNE
** Last update Tue Feb  7 17:25:34 2017 Heroin
*/
#include "../include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_putnbr(int nb)
{
  int   n;

  n = 0;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb < 10)
    {
      my_putchar(nb + '0');
    }
  else if (nb > 9)
    {
      my_putnbr(nb / 10);
      n = nb % 10;
      my_putchar(n + '0');
    }
  return (0);
}
