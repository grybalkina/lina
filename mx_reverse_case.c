#include <stdio.h>

void mx_reverse_case(char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 'a' && c[i <= 'z'])
        {
            c[i] -= 32;
        }
        else if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] += 32;
        }
    }
}