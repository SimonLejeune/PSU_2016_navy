/*
** pos.c for posfornavy in /home/heroin/delivery/PSU/PSU_2016_navy/src
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Tue Feb  7 17:39:11 2017 Heroin
** Last update Thu Feb  9 15:31:45 2017 Heroin
*/
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>
#include "../include/my.h"
  /*
char	**init_map(char **map, t_coord coord)
{
  if(coord.x 
}

void	init_boat(char *simon, char *map)
{
  char *s;
  int	i;
  t_coord coord;

  i = 0;
  s = malloc(sizeof(char) * 3);
  while(i < 14)
    {
      s = cut_str(simon, i);
      coord = conv_pos(pos);
      
      
	
}
  */
char	*cut_str(char *pos, int pos_wanted)
{
  int	i;
  int	cpt;
  char *s;

  s = malloc(sizeof(char) * 5);
  i = 0;
  cpt = 4;
  while(cpt > 0 && pos[pos_wanted] != '\0')
    {
      s[i] = pos[pos_wanted];
      i++;
      printf("%d\n", i);
      pos_wanted++;
      cpt--;
    }
  return(s);
}

t_coord	conv_pos(char *pos)
{
  t_coord	t_pos;
  int	i;
  int	q;

  i = 0;
  t_pos.x = 2;
  t_pos.y = 2;
  while(pos[i] != '\n' && pos[i] != '\0')
    {
      if(pos[i] >= 65 && pos[i] <= 72)
	{
	  q = 65;
	  while(q < pos[i])
	    {
	      t_pos.y += 2 ;
	      q++;
	    }
	}
      if(pos[i] >= 49 && pos[i] <= 56)
	{
	  q = 49;
	    while(q < pos[i])
	      {
		t_pos.x++;
		q++;
	      }
	}
      i++;
    }
  return(t_pos);
}

int	main(int ac, char **av)
{
  int	i = 19;
  char *s = "C1C2D4F4B5B8D7H7";
  char *s2;
  
  s2 = cut_str(s, i);
  printf("%s\n", s2);
}
