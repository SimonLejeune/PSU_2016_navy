/*
** main.c for test in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy/
**
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.eu>
**
** Started on  Wed Feb  8 16:29:02 2017 Simon LEJEUNE
** Last update Thu Feb  9 13:34:01 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
  int i;
  int j;
  int fd;
  char pos[32];
  char str[50];

  i = 0;
  j = 2;
  fd = open(av[1], O_RDONLY);
  read(fd, pos, 32);
  printf("%s\n", pos);
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
  printf("%s\n", str);
}
