##
## Makefile for Makefile in /home/rahil_f/rendu/PSU_2015_my_ls
## 
## Made by felix rahil
## Login   <rahil_f@epitech.net>
## 
## Started on  Sun Nov 29 20:24:42 2015 felix rahil
## Last update Tue Jan  5 15:22:54 2016 felix rahil
##

CC	= gcc 

RM	= rm -f

NAME	= bsq

SRCS	= bsq.c \
	  bsq2.c \
	  main.c 

OBJS	= $(SRCS:.c=.o)

all:	$(OBJS)
	$(CC) -o  $(NAME) $(OBJS) -lmy -L lib/my/

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re
