/*
** EPITECH PROJECT, 2022
** name_formatter
** File description:
** main
*/

#include "header.h"

void print_good_line_s(int x, int nb_line, int c)
{
    if (x == 0)
        chart_zero_s(c, nb_line);
    if (x == 1)
        chart_two_s(c, nb_line);
    if (x == 2)
        chart_three_s(c, nb_line);
    if (x == 3)
        chart_four_s(c, nb_line);
    if (x == 4)
        chart_five_s(c, nb_line);
    if (x == 5)
        chart_five_s(c, nb_line);
    if (x == 6)
        chart_six_s(c, nb_line);
    if (x == 7)
        chart_seven_s(c, nb_line);
    if (x == 8)
        chart_eight_s(c, nb_line);
    if (x == 9)
        chart_nine_s(c, nb_line);
}   

void print_space_s(int idx_nbr, char **argv, int idx_argv)
{
    if (idx_nbr != my_strlen(argv[idx_argv]) -1)
        printf(" ");
}

int get_char_to_edit(char **argv, int nbr)
{
    int idx_string = 0;
    int found_s = 0;
    int c_to_return = 0;

    for (; argv[idx_string] != NULL && found_s == 0; idx_string++)
        if (my_strcmp("-s", argv[idx_string]))
            found_s = 1;
    if (nbr >= my_strlen(argv[idx_string]))
        nbr = nbr - my_strlen(argv[idx_string] - 1);
    c_to_return = argv[idx_string][nbr];
    return c_to_return;
}

int algo_s(int argc, char **argv)
{
    int nbr_line = 5;
    int found_n = 0;
    int idx_argv = 0;
    int c = 0;
    
    if (!argv)
        return 84;
    for (; argv[idx_argv] != NULL && found_n == 0; idx_argv++)
        if (my_strcmp("-n", argv[idx_argv]))
            found_n = 1;
    for (int idx = 0; idx < nbr_line; idx = idx + 1) {
        for (int idx_nbr = 0; idx_nbr < my_strlen(argv[idx_argv]); idx_nbr++) {
            c = get_char_to_edit(argv, argv[idx_argv][idx_nbr] - '0');
            print_good_line_s(argv[idx_argv][idx_nbr] - '0', idx, c);
            print_space_s(idx_nbr, argv, idx_argv);
        }
        printf("\n");
    }        
    return 0;
}
