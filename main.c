/*
** EPITECH PROJECT, 2022
** mainfunction
** File description:
** mainfunction
*/

#include "header.h"

int check_errors(char **argv, int idx_n)
{
    for (int idx = 0; idx < my_strlen(argv[idx_n + 1]); idx++) {
        if (!argv[idx_n + 1] || my_strlen(argv[idx_n + 1]) <= 0)
            return 84;
        if (argv[idx_n + 1][idx] > '9' || argv[idx_n + 1][idx] < '0')
            return 84;
    }
    return 0;
}

int call_options(char **argv, int argc, int n_found, int s_found)
{
    if (n_found == 0)
        return 84;
    if (n_found == 1 && s_found == 1)
        return algo_s(argc, argv);
    if (n_found == 1)
        return project_name(argc, argv);
    return 84;
}

int main(int argc, char **argv)
{
    int n_found = 0;
    int s_found = 0;
    int idx_n = 0;
    int idx_s = 0;

    if (!argv || argc <= 2 || argc > 5)
        return 84;
    for (int i = 0; argv[i] != NULL; i++) {
        if (my_strcmp("-n", argv[i]) == 1) {
            n_found = 1;
            idx_n = i;
        }
        if (my_strcmp("-s", argv[i]) == 1) {
            s_found = 1;
            idx_s = i;
        }
    }
    if (check_errors(argv, idx_n) == 84)
        return 84;
    return call_options(argv, argc, n_found, s_found);
}

