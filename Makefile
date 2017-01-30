##
## Makefile for navy in /home/slejeune/Unix_System_Prog/Sem2/PSU_2016_navy
## 
## Made by Simon
## Login   <simon.lejeune@epitech.eu>
## 
## Started on  Mon Jan 30 09:40:20 2017 Simon
## Last update Mon Jan 30 11:42:25 2017 Simon
##

SRC	=

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

CFLAGS	=

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc $(OBJ) -o $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
