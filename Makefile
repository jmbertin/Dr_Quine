CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: Colleen Grace Sully

Colleen: Colleen.c
	$(CC) $(CFLAGS) -o $@ $<

Grace: Grace.c
	$(CC) $(CFLAGS) -o $@ $<

Sully: Sully.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f Grace_kid.c Sully_*.c Sully_*
	rm -f *.o

fclean: clean
	rm -f Colleen Grace Sully

re: fclean all

.PHONY: all clean fclean re
