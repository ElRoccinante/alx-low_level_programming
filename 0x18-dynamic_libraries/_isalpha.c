#include "main.h"

int _isalpha(int c)
{
/* Function implementation goes here */
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return 1;
return 0;
}
