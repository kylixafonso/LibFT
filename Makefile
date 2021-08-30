OBJECT_NAMES=$(wildcard *.c)

OBJECTS=$(patsubst %.c, %.o, $(OBJECT_NAMES))
SOURCES=$(patsubst %, %.c, $(OBJECT_NAMES))

FLAGS=-Wall -Wextra -Werror

all: $(OBJECTS)
	@gcc -o libft.o $(OBJECTS)
	@ar rcs libft.a libft.o

%.o: %.c
	@gcc -c -o $@ $^ $(FLAGS)

clean:
	@rm -f $(wildcard *.o)

fclean: clean
	@rm -rf libft.a

re: fclean all
