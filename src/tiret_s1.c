/*
** EPITECH PROJECT, 2022
** tiret_s.c
** File description:
** tiret_s.c
*/

#include "header.h"

void chart_five_s(int c, int line)
{
    if (line == 0)
        printf("%c%c%c%c%c");
    if (line == 1)
        printf("%c    ");
    if (line == 2)
        printf("%c%c%c%c ");
    if (line == 3)
        printf("    %c");
    if (line == 4)
        printf("%c%c%c%c ");
}

void chart_six_s(int c, int line)
{
    if (line == 0)
        printf(" %c%c%c ");
    if (line == 1)
        printf("%c    ");
    if (line == 2)
        printf("%c%c%c%c ");
    if (line == 3)
        printf("%c   %c");
    if (line == 4)
        printf(" %c%c%c ");
}

void chart_seven_s(int c, int line)
{
    if (line == 0)
        printf("%c%c%c%c");
    if (line == 1)
        printf("    %c");
    if (line == 2)
        printf("   %c ");
    if (line == 3)
        printf("  %c  ");
    if (line == 4)
        printf(" %c   "); 
}

void chart_eight_s(int c, int line)
{
    if (line == 0)
        printf(" %c%c%c ");
    if (line == 1)
        printf("%c   %c");
    if (line == 2)
        printf(" %c%c%c ");
    if (line == 3)
        printf("%c   %c");
    if (line == 4)
        printf(" %c%c%c ");
}

void chart_nine_s(int c, int line)
{
    if (line == 0)
        printf(" %c%c%c ");
    if (line == 1)
        printf("%c   %c");
    if (line == 2)
        printf(" %c%c%c%c");
    if (line == 3)
        printf("    %c");
    if (line == 4)
        printf(" %c%c%c ");
}
