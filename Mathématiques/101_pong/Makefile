##
## Makefile for makefile lib in /home/grella_c/rendu/101pong
## 
## Made by come grellard
## Login   <grella_c@epitech.net>
## 
## Started on  Mon Oct 12 10:41:25 2015 come grellard
## Last update Mon Nov  9 16:04:22 2015 come grellard
##

NAME	= 101pong

SRCS	= 101pong.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	cd lib/my ; make
	$(CC) -o $(NAME) $(OBJS) -lmy -L lib/ -lm

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
