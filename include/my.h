/*
** my.h for h for navy in /home/heroin/delivery/PSU/PSU_2016_navy/include
** 
** Made by Heroin
** Login   <victor.herouin@epitech.eu>
** 
** Started on  Mon Feb  6 12:06:55 2017 Heroin
** Last update Mon Feb  6 18:19:34 2017 Heroin
*/
int	is_neg(char *str);
int	is_num(char l);
int	my_getnbr(char *str);
int	my_putnbr(int nb);
int	countchar(char *str, char c);
int	count_word(char *str, char c);
int	my_strlen(char *str);
void	my_putchar(char c);
void	ennemy_connection();
void	connection(int ac, char **av);
char	*try_this(char *str);
char	**my_str_to_wordtab(char *str, char c);
