##
## Makefile for sudoki_bi in /home/grella_f/rendu/sudoki-bi
## 
## Made by felix grellard
## Login   <grella_f@epitech.net>
## 
## Started on  Sat Feb 27 12:32:49 2016 felix grellard
## Last update Sun Feb 28 20:01:02 2016 felix rahil
##

CC	= gcc -g3

RM	= rm -f

NAME	= sudoki-bi

SRCS	= sudoki-bi.c \
	  sudoki-bi_2.c \
	  sudoki-bi_3.c \
	  sudoki-bi_check.c

CFLAGS	+= -W -Wall -Wextra
CFLAGS	+= -I ./include

OBJS	= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) -o  $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re
