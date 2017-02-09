/*
** pos_to_str.c for navy in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Wed Feb  8 10:46:39 2017 Simon LEJEUNE
** Last update Thu Feb  9 18:02:29 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>
#include "../include/my.h"

char	*get_pos(char *pos)
{
  int		i;
  int		j;
  int		fd;
  char	*pos;
  char	*str;

  i = 0;
  j = 2;
  str = malloc(sizeof(char) * 51);
  pos = malloc(sizeof(char) * 33);
  read(fd, pos, 32);
  while (pos[j] != '\0')
    {
      if (pos[j] != ':' && pos[j] != '\n' && pos[j] != '\0')
        {
          str[i] = pos[j];
          i++;
        }
      else if (pos[j] == '\n')
	j = j + 2;
      j++;
    }
  return (str);
}

char	*open_pos(char *file)
{
  int fd;
  char  pos[50];
  char  *str;

  fd = open(file, O_RDONLY);
  read(fd, pos, 50);
  str = pos_to_str(pos);
  printf("%s\n", str);
  return (str);
}
