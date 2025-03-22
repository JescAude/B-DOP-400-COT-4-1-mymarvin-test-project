/*
** EPITECH PROJECT, 2024
** B-CPE-210-COT-2-stumper7-nuriablou
** File description:
** gameoflife
*/

#include "../include/my.h"

int cut_check_cell1(int a, char **tab, int i, int j)
{
    int rows = array_size(tab);
    int cols = strlen(tab[0]);

    if ((j + 1 <= cols - 1 && j + 1 >= 0) && tab[i][j + 1] == 'X')
        a++;
    if ((j - 1 <= cols - 1 && j - 1 >= 0) && tab[i][j - 1] == 'X')
        a++;
    if ((i + 1 <= rows - 1 && i + 1 >= 0) && tab[i + 1][j] == 'X')
        a++;
    if ((i - 1 <= rows - 1 && i - 1 >= 0) && tab[i - 1][j] == 'X')
        a++;
    return (a);
}

int check_cell1(int a, char **tab, int i, int j)
{
    int rows = array_size(tab);
    int cols = strlen(tab[0]);

    a = cut_check_cell1(a, tab, i, j);
    if ((i - 1 <= rows - 1 && i - 1 >= 0) && (j - 1 <= cols - 1
    && j - 1 >= 0) && tab[i - 1][j - 1] == 'X')
        a++;
    if ((i + 1 <= rows - 1 && i + 1 >= 0) && (j + 1 <= cols - 1
    && j + 1 >= 0) && tab[i + 1][j + 1] == 'X')
        a++;
    if ((i - 1 <= rows - 1 && i - 1 >= 0) && (j + 1 >= 0 &&
    j + 1 <= cols - 1) && tab[i - 1][j + 1] == 'X')
        a++;
    if ((i + 1 <= rows - 1 && i + 1 >= 0) && (j - 1 >= 0 &&
    j - 1 <= cols - 1) && tab[i + 1][j - 1] == 'X')
        a++;
    return a;
}

char check_cell(char **tab, int i, int j)
{
    int a = 0;
    int b = check_cell1(a, tab, i, j);

    if (tab[i][j] == 'X') {
        if (b == 0 || b == 1 || (b >= 4 && b <= 8))
            return '.';
        else
            return 'X';
    }
    if (tab[i][j] == '.') {
        if (b == 3)
            return 'X';
        else
            return '.';
    }
}

void game_of_life(char **tab1)
{
    int rows = array_size(tab1);
    int cols = strlen(tab1[0]);
    char **new_map = malloc(sizeof(char *) * (rows + 1));
    int i = 0;

    for (i = 0; tab1[i] != NULL; i++) {
        new_map[i] = malloc(sizeof(char) * (cols + 1));
        for (int j = 0; tab1[i][j] != 0; j++) {
            new_map[i][j] = check_cell(tab1, i, j);
        }
        new_map[i][cols] = 0;
    }
    new_map[i] = NULL;

    for (int i = 0; i < rows; i++) {
        strcpy(tab1[i], new_map[i]);
        free(new_map[i]);
    }
    free(new_map);
}
