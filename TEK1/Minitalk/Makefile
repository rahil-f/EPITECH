##
## Makefile for Makefile in /home/rahil_f/rendu/PSU_2015_my_ls
## 
## Made by felix rahil
## Login   <rahil_f@epitech.net>
## 
## Started on  Sun Nov 29 20:24:42 2015 felix rahil
## Last update Mon Feb  8 14:51:25 2016 felix rahil
##

CC	= cc 

RM	= rm -f

NAME_SERVER	= server_bin

NAME_CLIENT	= client_bin

CFLAGS		= -W -Wextra -Werror -Wall -pedantic

SRCS_SERVER	= server/server.c \
		  server/put.c

SRCS_CLIENT	= client/client.c

OBJS_SERVER	= $(SRCS_SERVER:.c=.o)

OBJS_CLIENT	= $(SRCS_CLIENT:.c=.o)

all:		$(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER):	$(OBJS_SERVER)
		$(CC) -o $(NAME_SERVER) $(OBJS_SERVER) $(CFLAGS) 
		mv $(NAME_SERVER) server/server

$(NAME_CLIENT):	$(OBJS_CLIENT)
		$(CC) -o $(NAME_CLIENT) $(OBJS_CLIENT) $(CFLAGS)
		mv $(NAME_CLIENT) client/client

clean:
	$(RM) $(OBJS_SERVER)
	$(RM) $(OBJS_CLIENT)

fclean: clean
	$(RM) server/server
	$(RM) client/client

re: fclean all clean

.PHONY:	all clean fclean re
