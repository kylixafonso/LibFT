OBJECT_NAMES=$(wildcard *.c)

OBJECTS=$(patsubst %.c, %.o, $(OBJECT_NAMES))
SOURCES=$(patsubst %, %.c, $(OBJECT_NAMES))

FLAGS=-Wall -Wextra -Werror

all: $(OBJECTS)
	@ar rcs libft.a $(OBJECTS)

%.o: %.c
	@gcc -c -o $@ $^ $(FLAGS)

clean:
	@rm -f $(wildcard *.o)

fclean: clean
	@rm -rf libft.a

re: fclean all
