/*
** main.c for test in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Wed Feb  8 16:29:02 2017 Simon LEJEUNE
** Last update Thu Feb  9 15:57:13 2017 Heroin
*/
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>

char	*get_pos(char *s)
{
  int i;
  int j;
  int fd;
  char *pos;
  char *str;

  i = 0;
  j = 2;
  pos = malloc(sizeof(char) * 33);
  str = malloc(sizeof(char) * 51);
  fd = open(s, O_RDONLY);
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
  return(str);
}
