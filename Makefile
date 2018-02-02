NAME = dr_quine

DQ1 = Colleen
DQ2 = Grace

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(DQ1).c
	gcc -o $(DQ1) $(DQ1).o

	gcc $(FLAGS) -c $(DQ2).c
	gcc -o $(DQ2) $(DQ2).o

	rm -rf $(DQ1).o $(DQ2).o

clean:
	rm -rf $(DQ1).o $(DQ2).o

fclean: clean
	rm -f $(DQ1) tmp$(DQ1)
	rm -f $(DQ2) $(DQ2)_kid.c

re: fclean all