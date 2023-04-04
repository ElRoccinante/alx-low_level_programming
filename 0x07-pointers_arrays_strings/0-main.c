#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_buffer_hex - Prints the contents of a buffer in hexadecimal format
 * @buffer: The buffer to print
 * @size: The size of the buffer in bytes
 */
void print_buffer_hex(char *buffer, int size);

/**
 * main - The main function of the program
 *
 * Return: 0 if the program executed successfully
 */
int main()
{
    char buffer[98] = {0};

    /* Print the contents of the buffer initialized to 0 */
    print_buffer_hex(buffer, 98);

    /* Initialize the buffer with 0x01 bytes */
    for(int i = 0; i < 95; i++)
    {
        buffer[i] = 0x01;
    }

    /* Print the updated buffer contents */
    printf("-------------------------------------------------\n");
    print_buffer_hex(buffer, 98);

    return 0;
}

/**
 * print_buffer_hex - Prints the contents of a buffer in hexadecimal format
 * @buffer: The buffer to print
 * @size: The size of the buffer in bytes
 */
void print_buffer_hex(char *buffer, int size)
{
    for (int i = 0; i < size; i++)
    {
        /* Add a newline every 10 bytes */
        if(i % 10 == 0)
        {
            printf("\n");
        }
        /* Print each byte in hexadecimal */
        printf("%02x ", buffer[i]);
    }
    printf("\n");
}
