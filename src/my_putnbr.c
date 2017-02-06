/*
** my_putnbr.c for putnbr in /home/Herouin/delivery/PSU_2016_my_printf/src
** 
** Made by Victor Herouin
** Login   <Herouin@epitech.net>
** 
** Started on  Thu Nov 17 15:40:12 2016 Victor Herouin
** Last update Mon Feb  6 14:49:30 2017 Heroin
*/
#include "../include/my.h"

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
  return(0);
}

