#include "main.h"
/**
* _isdigit - checks a digit
* @c: check a digit
* Return: 1 if digit, in other case 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
