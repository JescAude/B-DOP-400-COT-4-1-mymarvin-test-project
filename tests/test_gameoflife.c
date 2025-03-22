/*
** EPITECH PROJECT, 2024
** B-CPE-200-COT-2-2-stumper7-nuri.ablou
** File description:
** tests file
*/

#include "../include/my.h"

Test(game1, array_size)
{
    char *tab[] = {"mama", "papa", "enfant", NULL};
    int a = array_size(tab);
    cr_assert_eq(a, 3);
}

Test(game2, is_integer)
{
    int a = is_integer("12");
    cr_assert_eq(a, 12);
}

Test(game3, is_same_lenght)
{
    char *tab[] = {"papa", "mama", "apaa", "amma", NULL};
    char *str = "enfant";
    int len = is_same_lenght(tab, str);
    cr_assert_eq(len, 0);
}

Test(game4, invalid_char)
{
    char *buffer = "XXXXXX\n......";
    int a = invalid_char(buffer);
    cr_assert_eq(a, 0);
}

Test(game5, only_space)
{
    int len = only_space_tabs("       \t\t\t\n\n");
    cr_assert_neq(len, 0);
}

Test(game6, count_rows)
{
    int len = count_nb_of_rows("papa\nmama\nenfant\n");
    cr_assert_eq(len, 3);
}

Test(game7, disp_tab)
{
    char *tab[] = {"papa", "maman", "enfant", NULL};
    disp_tab(tab);
}
