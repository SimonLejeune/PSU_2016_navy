/*
** test.c for navy in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy
**
** Made by Simon
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Fri Feb  3 16:00:32 2017 Simon
** Last update Wed Feb  8 16:27:02 2017 Simon LEJEUNE
*/

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "./include/my.h"

void	connected()
{
  printf("enemy connected\n\n");
}

void	aff_my_map(char **av)
{
  int	fd;
  char	map[1000];

  fd = open("map", O_RDONLY);
  read(fd, map, 1000);
  printf("my positions:\n%s\n", map);
  printf("enemy's positions:\n%s\n", map);
  open_pos(av[1]);
}

void	aff_enemy_map(char **av)
{
  int	fd;
  char	map[1000];

  fd = open("map", O_RDONLY);
  read(fd, map, 1000);
  printf("my positions:\n%s\n", map);
  printf("enemy's positions:\n%s\n", map);
  open_pos(av[2]);

}

int	main(int ac, char **av)
{
  int	i;

  if (ac == 2)
    {
      printf("my_pid:  %i\n", getpid());
      signal(SIGUSR1, connected);
      printf("waiting for enemy connexion...\n");
      sleep(20);
      aff_my_map(av);
    }
  if (ac == 3)
    {
      printf("my_pid:  %i\n", getpid());
      i = atoi(av[1]);
      kill(i, SIGUSR1);
      printf("successfully connected\n\n");
      aff_enemy_map(av);
    }
  return (0);
}
