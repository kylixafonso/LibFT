make:
	@gcc -c *.c -o libft.o
	@ar rcs libft.a libft.o

clean:
	@rm -f *.o

fclean:
	@rm -f *.a
