/*
** EPITECH PROJECT, 2024
** B-CPE-210-COT-2-2-stumper7-nuri-ablou
** File description:
** .h file with all libraries needed
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <criterion/criterion.h>

#ifndef MY_H

    #define MY_H

int array_size(char **tab);

void free_2d_array(char **tab);

char *load_file(char const *filepath);

void is_valid_file(char *str);

char **split_string(char *str, char *delim);

int count_nb_of_rows(char *str);

void free_2d_array(char **tab);

int is_integer(char *str);

int only_space_tabs(char *str);

void disp_tab(char **tab);

char check_cell(char **tab, int o, int j);

int cut_check_cell1(int a, char **tab, int i, int j);

int check_cell1(int a, char **tab, int o, int j);

void game_of_life(char **tab1);

int invalid_char(char *buffer);

int is_same_lenght(char **tab, char *str);

int is_integer(char *str);

void free_tab(char **tab);

int only_space_tabs(char *str);

#endif
