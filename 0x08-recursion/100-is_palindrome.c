#include "main.h"

int find_strlen(const char *s)
{
    int len = 0; // Initialize the length variable to 0

    // Loop through the string until the null character (\0) is found
    while (s[len] != '\0')
    {
        len++; // Increment the length variable at each iteration
    }

    return len; // Return the calculated length of the string
}
