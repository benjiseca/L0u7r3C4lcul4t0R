# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 22:48:33 by mgaspa            #+#    #+#              #
#    Updated: 2017/08/20 23:13:34 by mgaspa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean

CC := gcc
CFLAGS := -Wall -Werror -Wextra
TARGET := eval_expr
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

all: $(TARGET);


$(TARGET): $(OBJ)
	@$(CC) $^ -o $@

%.o: %.c
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(TARGET)
