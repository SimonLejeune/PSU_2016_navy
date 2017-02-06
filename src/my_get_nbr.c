/*
** my_get_nbr.c for getnbre in /home/Herouin/delivery/CPool/func
** 
** Made by Herouin Victor
** Login   <Herouin@epitech.net>
** 
** Started on  Tue Dec 13 11:45:35 2016 Herouin Victor
** Last update Tue Dec 13 12:11:54 2016 Herouin Victor
*/

int	is_neg(char *str)
{
  int	i;
  int	counter;

  i = 0;
  counter = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
	counter = counter + 1;
      i++;
    }
  if (counter % 2 != 0)
    return (1);
  else
    return (0);
}

int	is_num(char l)
{
  if (l >= '0' && l <= '9')
    return (1);
  else if (l == '+' || l == '-')
    return (2);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;

  nbr = 0;
  i = 0;
  if (!str)
    return (0);
  while (is_num(str[i]) == 2)
    i++;
  while (is_num(str[i]) == 1)
    {
      nbr = ((nbr * 10) + (str[i] - 48));
      i++;
    }
  if (is_neg(str) == 1)
    nbr = -nbr;
  return (nbr);
}


