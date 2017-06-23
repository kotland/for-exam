#include <stdio.h>
#include <math.h>

int main()
{
    	float a,b,c;
    	printf("Insert a: ");
    	scanf("%f", &a);
	printf("\nInsert b: ");
	scanf("%f", &b);
	printf("\nInsert c: ");
	scanf("%f", &c);
    	if(a == 0)
    	{
        	if(b == 0)
        	{
            		if(c == 0)
            		{
                		printf("x - any cifres");
            		}
            		else
            		{
                		printf("Sqrt is no");
            		}
        	}
        	else
        	{
            		printf ("x = %g", -c/b);
		}
    	}
    	else
    	{
        	float d;
        	d = b * b - 4 * a * c;
        	if(d < 0)
        	{
            		printf("Sqrt is no");
        	}
        	else
        	{
            		if(d == 0)
            		{
                		printf("\nx = %g\n", -b/(2*a));
            		}
            		else
            		{
                		printf("\nX-1 = %g\n\nX-2 = %g",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
            		}
        	}
    	}
    	return 0;
}
