/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

int my_strlen (char const *str)
{
    int i = 0;

    if (!str)
        return -1;
    while (str[i] != '\0')
        i++;
    return i;
}
