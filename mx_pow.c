#include <math.h>

double ex_pow(double n, unsigned int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    else
    {
        double c = 1.0;
        for (int i = 0; i < pow; i++)
        {
            c *= n;
        }
        return c;
    }
}
