NAME = dr_quine

DQ1 = Colleen
DQ2 = Grace
DQ3 = Sully

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(DQ1).c $(DQ2).c $(DQ3).c

	gcc -o $(DQ1) $(DQ1).o
	gcc -o $(DQ2) $(DQ2).o
	gcc -o $(DQ3) $(DQ3).o

	rm -rf $(DQ1).o $(DQ2).o $(DQ3).o

clean:
	rm -rf $(DQ1).o $(DQ2).o $(DQ3).o

fclean: clean
	rm -f $(DQ1) tmp$(DQ1)
	rm -f $(DQ2) $(DQ2)_kid.c
	rm -f $(DQ3) $(DQ3)_*

re: fclean all