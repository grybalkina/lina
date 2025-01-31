#include <stdio.h>

void mx_str_separate(const char *str, char del)
{
    while (*str)
    {
        if (*str == del)
        {
            mx_printchar('\n');
        }
        else
        {
            mx_printchar(*str);
        }
        str++;
    }
    mx_printchar('\n');
}