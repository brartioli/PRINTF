# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/08 13:08:18 by bfernan2          #+#    #+#              #
#    Updated: 2025/08/08 14:44:16 by bfernan2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = CC
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
FILES = 

SRC = $(FILES)

$(NAME): $(OBJS)
	sr rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fcleam all

.PHONY: all clean fclean re