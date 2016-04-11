##
## Makefile for makefile lib in /home/grella_c/rendu/Piscine_C_J10
## 
## Made by come grellard
## Login   <grella_c@epitech.net>
## 
## Started on  Mon Oct 12 10:41:25 2015 come grellard
## Last update Mon Nov 23 17:17:25 2015 come grellard
##

NAME	= libmy.a

CC	= gcc

RM	= rm -f

OBJS	= $(SRCS:.c=.o)

SRCS	= my_putchar.c \
	  my_putstr.c \
	  my_putchar_err.c \
	  my_putstr_err.c \
	  my_put_nbr.c \
	  my_strlen.c

all: $(NAME)

$(NAME): $(OBJS) 
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	cp $(NAME) ../
	cp my.h ../../include

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) ../$(NAME)

re: fclean all
