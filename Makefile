NAME=pavillion
DATE=$(shell date | sed 's/ /_/g')
CC= gcc
GFLAGS = -Werror -Wall -Wextra -I./include/
SRCS= $(wildcard src/*.c)
OBJ= $(SRCS:.c =.o)

LIB= -Lmlx_linux -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz -Llibft -lft


$(NAME): $(OBJ)
	$(CC) $(GFLAGS) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -f filename
	cd src && rm -f *.o

fclean: clean
	rm -f $(NAME)

v: $(NAME)
	valgrind --leak-check=full --log-file=filename  -s ./$(NAME)

gdev:
	git add .
	git commit -m $(NAME)/$(DATE) 
	git push