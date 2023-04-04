#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal format
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * This function prints a buffer in hexadecimal format.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      /* Print a space after every 10 bytes */
      if (i % 10)
        {
	  printf(" ");
        }
      /* Print a new line after every 10 groups of 10 bytes */
      if (!(i % 10) && i)
        {
	  printf("\n");
        }
      /* Print each byte in hexadecimal format */
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

/**
 * main - Entry point
 *
 * This is the main function that tests the _memcpy function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char buffer[98] = {0};
  char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

  /* Print the contents of the empty buffer */
  printf("Buffer contents before memcpy:\n");
  simple_print_buffer(buffer, 98);

  /* Copy 10 bytes from buffer2 to buffer starting at position 50 */
  _memcpy(buffer + 50, buffer2, 10);

  /* Print the contents of the updated buffer */
  printf("-------------------------------------------------\n");
  printf("Buffer contents after memcpy:\n");
  simple_print_buffer(buffer, 98);    

  return (0);
}
