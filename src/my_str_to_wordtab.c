/*
** my_str_to_wordtab.c for strtowordtab in /home/Heroin/delivery/PSU/PSU_2016_minishell1/src
** 
** Made by Victor Herouin
** Login   <Heroin@epitech.net>
** 
** Started on  Wed Jan 18 00:39:57 2017 Victor Herouin
** Last update Mon Feb  6 18:19:12 2017 Heroin
*/
#include <stdlib.h>
#include "../include/my.h"

char	*try_this(char *str)
{
  int	i;
  int	j;
  char	*s;

  i = 0;
  j = 0;
  s = malloc(sizeof(char) * (my_strlen(str) + 1));
  while(str[i] != '=')
    i++;
  i++;
  while(str[i] != '\0')
    {
      s[j] = str[i];
      i++;
      j++;
    }
  return(s);
}

int    count_word(char *str, char c)
{
  int  i;
  int  n;
  
  i = 0;
  n = 1;
  while(str[i] != '\0')
    {
      if(str[i] == c)
	n++;
      i++;
    }
  return(n);
}

int    countchar(char *str, char c)
{
  int  cpt;
  
  cpt = 0;
  while((str[cpt] != c) && (str[cpt] != '\0'))
    cpt++;
  cpt++;
  return(cpt);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while(str[i] != '\0')
    {
      i++;
    }
  return(i);
}
char    **my_str_to_wordtab(char *str, char c)
{
  char  **tab;
  int  i;
  int  b;
  int  a;
  
  i = 0;
  b = 0;
  a = 0;
  tab = malloc(sizeof(*tab) * ((count_word(str, c) + 1)));
  while (str[i] != '\0')
    {
      if (str[i] == c)
	{
	  while(str[i] == c)
	    i++;
	  a++;
	  b = 0;
	}
      tab[a] = malloc(sizeof(**tab) * (((countchar(str, c) + i) + 1)));
      while ((str[i] != c) && (str[i] != '\0'))
	tab[a][b++] = str[i++];
      tab[a][b] = '\0';
    }
  tab[a+1] = 0;
  return(tab);
}
