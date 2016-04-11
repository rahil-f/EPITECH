##
## Makefile for Makefile in /home/rahil_f/rendu/Piscine_C_J10/lib/ma
## 
## Made by felix rahil
## Login   <rahil_f@epitech.net>
## 
## Started on  Fri Oct  9 20:40:23 2015 felix rahil
## Last update Sun Oct 18 14:30:22 2015 felix rahil
##

CC	= gcc

RM	= rm -f

NAME	= libmy.a

SRCS	= my_find_prime_sup.c \
	  my_getnbr.c \
	  my_isneg.c \
	  my_showmem.c \
	  my_is_prime.c \
	  my_power_rec.c \
	  my_putchar.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_revstr.c \
	  my_showstr.c \
	  my_sort_int_tab.c \
	  my_square_root.c \
	  my_strcapitalize.c \
	  my_strcat.c \
	  my_strcpy.c \
	  my_str_isalpha.c \
	  my_str_islower.c \
	  my_str_isnum.c \
	  my_str_isprintable.c \
	  my_str_isupper.c \
	  my_strlcat.c \
	  my_strlen.c \
	  my_strlowcase.c \
	  my_strncat.c \
	  my_strncmp.c \
	  my_strncpy.c \
	  my_strstr.c \
	  my_strupcase.c \
	  my_swap.c \

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	cp $(NAME) ../
	cp my.h ../../include
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
