#include <stdio.h>

void mx_swap_char(char *c, char *b)
{
    char a = *c;
    *c = *b;
    *b = a;
}
