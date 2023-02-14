/*
** EPITECH PROJECT, 2022
** My Load File in Mem
** File description:
** Gautier Bonhur
*/

#include "header.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char *my_file_in_mem(char *filepath)
{
    struct stat stat_t;
    int fd = open(filepath, O_RDONLY);
    char *buffer = NULL;

    if (!fd == -1 || stat(filepath, &stat_t) == -1)
        return NULL;
    if (!(buffer = malloc(sizeof(char) * stat_t.st_size + 1)))
        return NULL;
    if (read(fd, buffer, stat_t.st_size) == -1)
        return NULL;
    close(fd);
    return buffer;
}
