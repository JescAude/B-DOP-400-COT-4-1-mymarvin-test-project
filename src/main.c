/*
** EPITECH PROJECT, 2024
** B-CPE-210-COT-2-2-stumper7-nuri.ablou
** File description:
** Main function
*/

#include "../include/my.h"

void cut_main(int nb, char **tab1)
{
    for (int i = 0; i < nb; i++)
        game_of_life(tab1);
    disp_tab(tab1);
}

int main(int ac, char **av)
{
    char **tab1 = NULL;
    char *buff = NULL;
    int nb = 0;

    if (ac != 3)
        return (84);
    nb = is_integer(av[2]);
    buff = load_file(av[1]);
    invalid_char(buff);
    tab1 = split_string(buff, "\n");
    is_same_lenght(tab1, buff);
    cut_main(nb, tab1);
    free_tab(tab1);
    free(buff);
    return (0);
}
