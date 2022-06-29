NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Wextra

SRC = test.c

OBJS = $(SRCS:.C=.O)

%.o : %.c libftprintf.h
	$(CC) $(CFLAGS) -I./ -c $< -o $@
