/*
** EPITECH PROJECT, 2024
** B-CPE-210-COT-2-2-stumper7-nuri.ablou
** File description:
** function to load a file in memory
*/

#include "../include/my.h"

static int a;
void cut_load_file(char **buffer)
{
    if (*buffer == NULL || only_space_tabs(*buffer) == 84) {
        free(*buffer);
        exit(84);
    }
    return;
}

char *load_file(char const *filepath)
{
    int b = 0;
    char *buffer = NULL;
    struct stat p = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    stat(filepath, &p);
    buffer = malloc(sizeof(char) * (p.st_size + 1));
    a = open(filepath, O_RDONLY);
    if (a == -1) {
        free(buffer);
        exit(84);
    }
    b = read(a, buffer, p.st_size + 1);
    if (b == -1) {
        free(buffer);
        exit(84);
    }
    buffer[b] = '\0';
    close(a);
    cut_load_file(&buffer);
    return (buffer);
}
