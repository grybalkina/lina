#include <stdio.h>

int mx_strlen(const char *s)
{
    int letter = 0;
    while (*s != '\0')
    {
        letter ++;
    }
    return letter;
}
