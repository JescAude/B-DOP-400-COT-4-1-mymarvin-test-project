##
## EPITECH PROJECT, 2024
## B-CPE-210-COT-2-2-stumper7-nuri.ablou
## File description:
## makefile for setting_up project
##

SRC1    =   	src/my_str_to_word_array.c\
		src/load_file.c\
		src/cell.c\
		src/main.c\
		src/aux_functions.c\

SRC2	=	src/my_str_to_word_array.c\
		src/load_file.c\
		src/aux_functions.c\

TEST	=	tests/test_gameoflife.c\


BIN1   =       gameoflife


BIN2	=	unit_tests


all:
	gcc -g3 $(SRC1) -o $(BIN1)

test_units:
	gcc $(SRC2) -o $(BIN2) $(TEST) --coverage -lcriterion -lgcov

tests_run:	test_units
		./$(BIN2)

clean:
	rm -f *~
	rm -f *#
	rm -f src/*~
	rm -f src/*#
	rm -f include/*~
	rm -f include/*#
	rm -f tests/*~
	rm -f tests/*#
	rm -f *.gcda
	rm -f *.gcno

fclean: clean
	rm -f $(BIN1)
	rm -f $(BIN2)
	rm -f *vgcore*

re:	fclean all

code:
	clear
	coding-style . .
	cat coding-style-reports.log
	rm -rf coding-style-reports.log
