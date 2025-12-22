# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/19 18:35:01 by sbeldjao          #+#    #+#              #
#    Updated: 2025/11/30 14:32:35 by Serge            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	ft_printf.c \
	ft_arg_char.c \
	ft_arg_str.c \
	ft_arg_pt.c \
	ft_arg_int.c \
	ft_arg_uint.c \
	ft_arg_hexalo.c \
	ft_arg_hexaup.c \

OBJECTS = $(SOURCES:.c=.o)

TARGET = prog

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar r $(NAME) $(OBJECTS)

$(OBJECTS) : $(SOURCES)
	$(CC) $(CFLAGS) -c $(SOURCES)

clean : 
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME) $(TARGET)

re : fclean all

test : clear $(TARGET) fclean

$(TARGET) : $(SOURCES)
	$(CC) $(SOURCES) main.c -o $(TARGET)
	./$(TARGET)

clear :
	clear
