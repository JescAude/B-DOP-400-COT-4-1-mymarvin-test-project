/*
** EPITECH PROJECT, 2024
** B-CPE-210-COT-2-2-stumper7-nuri.ablou
** File description:
** main function
*/

#include "../include/my.h"

void free_tab(char **tab)
{
    if (tab == NULL)
        return;
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}

int is_integer(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] > '9' || str[i] < '0') {
            exit(84);
        }
    }
    return (atoi(str));
}

int is_same_lenght(char **tab, char *str)
{
    int len = strlen(tab[0]);

    for (int i = 1; tab[i] != NULL; i++) {
        if (strlen(tab[i]) != len) {
            free_tab(tab);
            free(str);
            exit(84);
        }
    }
    return (0);
}

int invalid_char(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != '\n' && buffer[i] != '.'
        && buffer[i] != 'X') {
            free(buffer);
            exit(84);
        }
    }
    return (0);
}
