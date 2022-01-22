# Author: Nysioko and Crazit
# Create Time: 2021-04-21 14:17:55
# Modified by: Nysioko and Crazit
# Modified time: 21-04-2021 14:18:13
# Description: Makefile

NAME	= wordlist

CC	= gcc

RM	= rm -f

SRCS	= ./word.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
