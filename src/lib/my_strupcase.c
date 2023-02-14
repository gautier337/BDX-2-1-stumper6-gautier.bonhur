/*
** EPITECH PROJECT, 2022
** my_strupcase
** File description:
** strupcase
*/

#include "header.h"

char *my_strupcase(char *str)
{
    if (!str)
        return NULL;
    for (int i = 0; str[i] != '\0'; i += 1)
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    return str;
}
