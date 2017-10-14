#include <stdio.h>
#include <assert.h>
#include "../calc.h"

int main (int argc, char** argv)
{
	double x1 = 0, x2 = 0;

	assert( 1 == calculate(4, 6, 2, &x1, &x2) );

	assert( -1 == calculate(1, 2, 3, &x1, &x2) );

	assert( 1 == calculate(8, 12, 4, &x1, &x2) );

	assert( -1 == calculate(5, 8, 4, &x1, &x2) );

	assert( -1 == calculate(4, 2, 10, &x1, &x2) );

	assert( 1 == calculate(1, 7, 1, &x1, &x2) );

	assert( 1 == calculate(2, 6, 2, &x1, &x2) );

	assert( 1 == calculate(3, 5, 1, &x1, &x2) );

	assert( -1 == calculate(4, 4, 2, &x1, &x2) );

	assert( 0 == calculate(4, 8, 4, &x1, &x2) );

	assert( -1 == calculate(6, 2, 9, &x1, &x2) );

	assert( -1 == calculate(7, 1, 8, &x1, &x2) );

	assert( -1 == calculate(8, 2, 20, &x1, &x2) );

	assert( -1 == calculate(9, 3, 6, &x1, &x2) );

	assert( -1 == calculate(10, 4, 4, &x1, &x2) );

	assert( 1 == calculate(1, 5, 6, &x1, &x2) );

	assert( 1 == calculate(1, 6, 3, &x1, &x2) );

	assert( -1 == calculate(13, 7, 9, &x1, &x2) );

	assert( 1 == calculate(1, 8, 3, &x1, &x2) );

	assert( 1 == calculate(1, 9, 4, &x1, &x2) );

	assert( 1 == calculate(16, 16, 2, &x1, &x2) );

	assert( 0 == calculate(4, 8, 4, &x1, &x2) );

	assert( 0 == calculate(2, 4, 2, &x1, &x2) );

	assert( 0 == calculate(1, 2, 1, &x1, &x2) );
	return 0;
}