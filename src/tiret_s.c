/*
** EPITECH PROJECT, 2022
** tiret_s.c
** File description:
** tiret_s.c
*/

#include "header.h"

void chart_zero_s(int c, int line)
{
    if (line == 0)
        printf(" %c%c%c ", c, c, c);
    if (line == 1)
        printf("%c   %c", c, c);
    if (line == 2)
        printf("%c   %c", c, c);
    if (line == 3)
        printf("%c   %c", c, c);
    if (line == 4)
        printf(" %c%c%c ", c, c, c);
}

void chart_one_s(int c, int line)
{
    if (line == 0)
        printf(" %c%c%c ");
    if (line == 1)
        printf(" %c %c%c ");
    if (line == 2)
        printf("  %c%c ");
    if (line == 3)
        printf("  %c%c ");
    if (line == 4)
        printf(" %c%c%c%c");
}

void chart_two_s(int c, int line)
{
    if (line == 0)
        printf(" %c%c%c ");
    if (line == 1)
        printf("%c  %c");
    if (line == 2)
        printf("   %c ");
    if (line == 3)
        printf(" %c   ");
    if (line == 4)
        printf("%c%c%c%c%c");
}

void chart_three_s(int c, int line)
{
    if (line == 0)
        printf("%c%c%c%c ");
    if (line == 1)
        printf("    %c");
    if (line == 2)
        printf(" %c%c%c ");
    if (line == 3)
        printf("    %c");
    if (line == 4)
        printf("%c%c%c%c ");
}

void chart_four_s(int c, int line)
{
    if (line == 0)
        printf("  %c%c ");
    if (line == 1)
        printf(" %c %c ");
    if (line == 2)
        printf("%c  %c ");
    if (line == 3)
        printf("%c%c%c%c%c");
    if (line == 4)
        printf("   %c ");
}
