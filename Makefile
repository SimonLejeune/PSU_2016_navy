##
## Makefile for navy in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy
## 
## Made by Simon
## Login   <simon.lejeune@epitech.eu>
## 
## Started on  Mon Jan 30 09:40:20 2017 Simon
## Last update Tue Feb  7 17:30:17 2017 Heroin
##

SRC	=	src/main.c		\
		src/my_get_nbr.c	\
		src/functions.c		\
		src/my_str_to_wordtab.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

all	:	$(OBJ)
		gcc $(OBJ) -o $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
