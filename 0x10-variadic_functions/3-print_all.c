#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_c - prints a char
 *
 * @ap: argument list
 */
void print_c(va_list ap)
{
    printf("%c", va_arg(ap, int));
}

/**
 * print_i - prints an integer
 *
 * @ap: argument list
 */
void print_i(va_list ap)
{
    printf("%d", va_arg(ap, int));
}

/**
 * print_f - prints a float
 *
 * @ap: argument list
 */
void print_f(va_list ap)
{
    printf("%f", va_arg(ap, double));
}

/**
 * print_s - prints a string
 *
 * @ap: argument list
 */
void print_s(va_list ap)
{
    char *s;

    s = va_arg(ap, char *);
    if (s == NULL)
        s = "(nil)";
    printf("%s", s);
}

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    int i = 0, j;
    char *sep = "";

    struct print_t
    {
        char t;
        void (*f)(va_list);
    } p[] = {
        { 'c', print_c },
        { 'i', print_i },
        { 'f', print_f },
        { 's', print_s },
        { 0, NULL }
    };

    va_start(ap, format);

    while (format && format[i])
    {
        j = 0;
        while (p[j].t != 0)
        {
            if (p[j].t == format[i])
            {
                printf("%s", sep);
                p[j].f(ap);
                sep = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    printf("\n");
    va_end(ap);
}
