##
## Makefile for Makefile in /home/grella_c/rendu/Maths/102cipher
## 
## Made by come grellard
## Login   <grella_c@epitech.net>
## 
## Started on  Mon Nov 23 14:14:13 2015 come grellard
## Last update Tue Nov 24 11:16:24 2015 come grellard
##

NAME	= 102cipher

SRCS	= 102cipher.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc # -g3

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	cd lib/my ; make
	$(CC) -o $(NAME) $(OBJS) -lmy -L lib/ -lm

clean:
	cd lib/my ; make clean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
