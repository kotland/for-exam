#include <stdio.h>
#include "calc.h"

int main(int argc, char** argv)
{
    float a,b,c;
    printf("Insert a: ");
    scanf("%f", &a);
    printf("\nInsert b: ");
    scanf("%f", &b);
    printf("\nInsert c: ");
    scanf("%f", &c);
    printf("\n");

    double x1 = 0, x2 = 0;
    int result = calculate(a,b,c,&x1,&x2);
    
    switch (result)
    {
        case -1:
            printf("No roots\n");
            break;
        case 0:
            printf("X1 = %g\n", x1);
            break;
        case 1:
            printf("X-1 = %g\nX-2 = %g\n",x1,x2);
            break;
    }
    return 0;
}
