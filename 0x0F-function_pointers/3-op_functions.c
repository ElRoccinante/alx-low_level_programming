#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**

op_add - function that returns the sum of a and b.
@a: an input integer
@b: an input integer
Return: the result of a plus b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**

op_sub - function that returns the difference of a and b.
@a: an input integer
@b: an input integer
Return: the result of a minus b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**

op_mul - function that returns the product of a and b.
@a: an input integer
@b: an input integer
Return: the result of a times b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**

op_div - function that returns the division of a by b.

@a: an input integer

@b: an input integer

Return: the result of a divided by b.

If b is 0, print "Error" and exit with status code 100.
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}

/**

op_mod - function that returns the remainder of a divided by b.
@a: an input integer
@b: an input integer
Return: the result of a modulo b.
If b is 0, print "Error" and exit with status code 100.
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
