#include "main.h"

int find_strlen(const char *s); // Déclarer le paramètre 's' comme pointeur constant
int check_palindrome(const char *s, int len, int index); // Déclarer le paramètre 's' comme pointeur constant
int is_palindrome(const char *s); // Déclarer le paramètre 's' comme pointeur constant

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(const char *s) // Déclarer le paramètre 's' comme pointeur constant
{
        int len = 0;

        if (*(s + len))
        {
                len++;
                len += find_strlen(s + len);
        }

        return (len);
}
