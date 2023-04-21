#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: types in string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    int i = 0, typ;
    char *str;

    va_list args;

    va_start(args, format);
    while (format[i])
    {
        typ = format[i];
        switch (typ)
        {
            case 'c':
                printf("%c", (char) va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", (float) va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                {
                    printf("(nil)");
                    break;
                }
                printf("%s", str);
                break;
            default:
                break;
        }
        if ((typ == 'c' || typ == 'f' || typ == 'i' || typ == 's') && format[i + 1] != '\0')
        {
            printf(", ");
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
