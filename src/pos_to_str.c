/*
** pos_to_str.c for navy in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy/src/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Wed Feb  8 10:46:39 2017 Simon LEJEUNE
** Last update Wed Feb  8 16:32:02 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>
#include "../include/my.h"

char	*pos_to_str(char *pos)
{
  char *str;
  int i;
  int j;

  str = malloc(sizeof(char) * strlen(pos));
  i = 0;
  while (pos[j] != '\0')
    {
      j = 2;
      while (pos[j] != '\n')
      {
        while (pos[j] != ':' || pos[j] != '\n' || pos[j] != '\0')
          {
            str[i] = pos[j];
            j++;
          }
        j++;
        i++;
      }
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
