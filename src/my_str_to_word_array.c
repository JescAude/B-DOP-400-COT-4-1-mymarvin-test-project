/*
** EPITECH PROJECT, 2024
** B-CPE-210-COT-2-2-stumper7-nuri.ablou
** File description:
** function to split a string in a 2d array with strtok
*/

#include "../include/my.h"

int only_space_tabs(char *str)
{
    int len = 0;

    if (str == NULL)
        return (84);
    for (int i = 0; str[i] != 0; i++)
        if (str[i] != ' ' && str[i] != '\t'
        && str[i] != '\n')
            len++;
    if (len == 0)
        return (84);
    return (0);
}

int count_nb_of_rows(char *str)
{
    int i = 0;
    int j = 0;

    for (i = 0; str[i] != 0; i++)
        if (str[i] == '\n')
            j++;
    return (j);
}

char **split_string(char *str, char *delim)
{
    int i = 0;
    char **tab = malloc(sizeof(char *) * (count_nb_of_rows(str) + 1));
    char *temp1 = strdup(str);
    char *temp2 = strtok(temp1, delim);

    while (temp2 != NULL) {
        tab[i] = strdup(temp2);
        temp2 = strtok(NULL, delim);
        i++;
    }
    tab[i] = NULL;
    free(temp1);
    free(temp2);
    return (tab);
}

int array_size(char **tab)
{
    int i = 0;

    for (i; tab[i] != NULL; i++);
    return (i);
}

void disp_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        printf("%s\n", tab[i]);
    }
    return;
}
