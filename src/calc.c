#include <math.h>

int calculate (int a, int b, int c, double *x1, double *x2) {
    if (a == 0)
    {
        if (b == 0)
            return -1;
        else 
        {
            *x1 = -c/b;
            return 0;
        }
    }
    else
    {
        double D = b * b - 4 * a * c;
        if (D < 0)
        {
            return -1;
        }
        else if (D == 0)
        {
            *x1 = -b/(2*a);
            return 0;
        }
        else
        {
            *x1 = (-b+sqrt(D))/(2*a);
            *x2 = (-b-sqrt(D))/(2*a);
            return 1;
        }
    }
}