#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**

op_add - a function that returns the sum of a and b.
@a: an input integer
@b: an input integer
Return: The result of adding a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**

op_sub - a function that returns the difference of a and b.
@a: an input integer
@b: an input integer
Return: The result of subtracting b from a.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**

op_mul - a function that returns the product of a and b.
@a: an input integer
@b: an input integer
Return: The result of multiplying a by b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**

op_div - a function that returns the division of a and b.

@a: an input integer

@b: an input integer

Return: The result of dividing a by b.

Description: If b is 0, prints "Error" and exits with a status of 100.
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

op_mod - a function that returns the remainder of a divided by b.

@a: an input integer

@b: an input integer

Return: The result of a modulo b.

Description: If b is 0, prints "Error" and exits with a status of 100.
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
