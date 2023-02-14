##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Gautier BONHUR
##

NAME			=	crocus

SRC_MAIN		= main.c

SRC				=	$(addprefix src/, \
					project_name.c \
					tiret_s.c \
					tiret_s1.c	\
					algo_s.c	\
					lib/my_putchar.c \
					lib/my_putstr.c \
					lib/my_strcmp.c \
					lib/my_strlen.c \
					lib/my_strcat.c \
					lib/my_getnbr.c \
					lib/my_strncpy.c \
					lib/my_load_file_in_mem.c \
					lib/my_put_nbr_in_str.c \
					lib/my_strcpy.c \
					lib/my_strupcase.c \
					lib/my_arrlen.c \
					lib/str_to_array.c)

SRC_TESTS = tests/tests_main.c

OBJ				=			$(SRC:.c=.o)

OBJ_MAIN		=			$(SRC_MAIN:.c=.o)

CFLAGS 			= 			-I./includes

CRITERION		= 			--coverage -lcriterion

all: 			$(NAME)

$(NAME):		$(OBJ) $(OBJ_MAIN)
	gcc -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS)

tests_run: $(OBJ)
	make re
	gcc -o unit_tests $(SRC) $(SRC_TESTS) $(CFLAGS) $(CRITERION)
	./unit_tests
	rm unit_tests

clean:
	rm -f $(OBJ)
	rm -f *.o
	rm -f *.gcda
	rm -f *.gcno
	rm -f unit_tests

fclean:			clean
	rm -f $(NAME)

re:	$(NAME)

.PHONY: all $(NAME) fclean tests_run clean re make
