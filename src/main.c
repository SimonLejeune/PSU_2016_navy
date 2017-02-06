/*
** main.c for navyyyy in /home/heroin/delivery/PSU/PSU_2016_navy/src
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Wed Feb  1 17:46:09 2017 Heroin
** Last update Mon Feb  6 14:48:50 2017 Heroin
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "../include/my.h"

void	my_info()
{
  pid_t	pid;

  pid = getpid();
  write(1, "my_pid:  ", 8);
  my_putnbr(pid);
  write(1, "\n", 1);
  write(1, "waiting for enemy connexion...", 32);
}

void	connection(int ac, char **av)
{
  pid_t	pid;
  int	i;
  useconds_t usec;

  usec = 100000000;
  pid = getpid();
  if(ac == 2)
    {
      my_info();
      signal(10, ennemy_connection);
      usleep(usec);
    }
  if(ac == 3)
    {
      pid = getpid();
      write(1, "my_pid:  ", 8);
      my_putnbr(pid);
      i = my_getnbr(av[1]);
      kill(i, 10);
      write(1, "\n", 1);
      write(1, "successfully connected", 22);
    }
}

void	ennemy_connection()
{
  write(1, "\n", 1);
  write(1, "enemy connected", 15);
}
int	main(int ac, char **av)
{
  connection(ac, av);
  return(0);
}
