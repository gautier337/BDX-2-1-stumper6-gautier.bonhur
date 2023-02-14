/*
** EPITECH PROJECT, 2022
** name_formatter
** File description:
** main
*/

#include "header.h"

char *zero[] = {
    " 000 ",
    "0   0",
    "0   0",
    "0   0",
    " 000 ",
    NULL,
};

char *one[] = {
    " 000 ",
    "0 00 ",
    "  00 ",
    "  00 ",
    " 0000",
    NULL,
};

char *two[] = {
    " 000 ",
    "0   0",
    "   0 ",
    " 0   ",
    "00000",
    NULL,
};

char *three[] = {
    "0000 ",
    "    0",
    " 000 ",
    "    0",
    "0000 ",
    NULL,
};

char *four[] = {
    "  00 ",
    " 0 0 ",
    "0  0 ",
    "00000",
    "   0 ",
    NULL,
};

char *five[] = {
    "00000",
    "0    ",
    "0000 ",
    "    0",
    "0000 ",
    NULL,
};

char *six[] = {
    " 000 ",
    "0    ",
    "0000 ",
    "0   0",
    " 000 ",
    NULL,
};

char *seven[] = {
    "00000",
    "    0",
    "   0 ",
    "  0  ",
    " 0   ",
    NULL,
};

char *eight[] = {
    " 000 ",
    "0   0",
    " 000 ",
    "0   0",
    " 000 ",
    NULL,
};

char *nine[] = {
    " 000 ",
    "0   0",
    " 000",
    "    0",
    " 000 ",
    NULL,
};

void print_good_line(int x, int nb_line)
{
    if (x == 0)
        printf("%s", zero[nb_line]);
    if (x == 1)
        printf("%s", one[nb_line]);
    if (x == 2)
        printf("%s", two[nb_line]);
    if (x == 3)
        printf("%s", three[nb_line]);
    if (x == 4)
        printf("%s", four[nb_line]);
    if (x == 5)
        printf("%s", five[nb_line]);
    if (x == 6)
        printf("%s", six[nb_line]);
    if (x == 7)
        printf("%s", seven[nb_line]);
    if (x == 8)
        printf("%s", eight[nb_line]);
    if (x == 9)
        printf("%s", nine[nb_line]);
}   

void print_space(int idx_nbr, char **argv, int idx_argv)
{
    if (idx_nbr != my_strlen(argv[idx_argv]) -1)
        printf(" ");
}
    
int project_name(int argc, char **argv)
{
    int nbr_line = 5;
    int found_n = 0;
    int idx_argv = 0;
    
    if (!argv)
        return 84;
    for (; argv[idx_argv] != NULL && found_n == 0; idx_argv++)
        if (my_strcmp("-n", argv[idx_argv]))
            found_n = 1;
    for (int idx = 0; idx < nbr_line; idx = idx + 1) {
        for (int idx_nbr = 0; idx_nbr < my_strlen(argv[idx_argv]); idx_nbr++) {
            print_good_line(argv[idx_argv][idx_nbr] - '0',
                idx);
            print_space(idx_nbr, argv, idx_argv);
            //printf("%d\n", argv[idx_argv][idx_nbr] - '0');
        }
        printf("\n");
    }        
    return 0;
}
