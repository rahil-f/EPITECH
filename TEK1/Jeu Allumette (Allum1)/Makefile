##
## Makefile for Makefile in /home/rahil_f/rendu/PSU_2015_my_ls
## 
## Made by felix rahil
## Login   <rahil_f@epitech.net>
## 
## Started on  Sun Nov 29 20:24:42 2015 felix rahil
## Last update Sun Feb 21 12:25:58 2016 felix rahil
##

CC	= gcc 

RM	= rm -f

NAME	= allum1

SRCS	= allum1.c \
	  main.c \
	  get_next_line.c \
	  put.c \
	  ia.c

# CFLAGS	+= -W -Wall -Wextra
# CFLAGS	+= -I ./include

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
