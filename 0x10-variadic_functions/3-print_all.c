#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @valist: va_list containing the argument to print
 */
void print_char(va_list valist)
{
    printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an int
 * @valist: va_list containing the argument to print
 */
void print_int(va_list valist)
{
    printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints a float
 * @valist: va_list containing the argument to print
 */
void print_float(va_list valist)
{
    printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints a string
 * @valist: va_list containing the argument to print
 */
void print_string(va_list valist)
{
    char *str = va_arg(valist, char *);
    if (!str)
    {
        printf("(nil)");
    }
    else
    {
        printf("%s", str);
    }
}

/**
 * print_all - prints all
 * @format: format string containing the types of the arguments
 */
void print_all(const char * const format, ...)
{
    va_list valist;
    unsigned int i = 0, j, k = 0;
    const char t_arg[] = "cifs";
    void (*print_funcs[])(va_list) = {print_char, print_int, print_float, print_string};

    va_start(valist, format);
    while (format && format[i])
    {
        j = 0;
        while (t_arg[j])
        {
            if (format[i] == t_arg[j] && k)
            {
                printf(", ");
                break;
            }
            j++;
        }
        if (j < 4)
        {
            print_funcs[j](valist);
            k = 1;
        }
        i++;
    }
    printf("\n");
    va_end(valist);
}
