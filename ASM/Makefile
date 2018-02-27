NAME = dr_quine

TEST = test

all: $(NAME)

$(NAME):
	nasm -fmacho64 $(TEST).asm
	ld -o $(TEST) $(TEST).o
	rm -rf $(TEST).o

clean:
	rm -rf $(TEST).o

fclean: clean
	rm -f $(TEST)

re: fclean all