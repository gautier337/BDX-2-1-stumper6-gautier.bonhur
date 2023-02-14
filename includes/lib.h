/*
** EPITECH PROJECT, 2022
** header lib
** File description:
** lib
*/

#ifndef lib
    #define lib

int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *src, char *dest);
int my_putstr(char const *str);
int my_putchar(char c);
int my_getnbr(char *str);
char *my_strcpy(const char *src);
char *my_file_in_mem(char *filepath);
char **str_to_array(const char *str, char separator);
int my_arrlen(char **arr);
char *my_put_nbr_in_str(int nb);
int my_getnbsize(int nb);
char *my_strncpy(const char *src, int nb);
char *my_strupcase(char *str);

#endif
