#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints the contents of a memory buffer in hexadecimal format
 * @buffer: a pointer to the memory buffer to print
 * @size: the size of the memory buffer to print, in bytes
 *
 * Description: This function takes in a pointer to a memory buffer and the size
 * of the buffer in bytes, and prints the contents of the buffer in hexadecimal format.
 * Each byte of the buffer is printed as a two-digit hexadecimal number, preceded by "0x".
 * The function also prints a newline character at the end of the buffer.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

/**
 * main - entry point of the program
 *
 * Description: This function initializes a memory buffer of size 98 with all
 * values set to 0x00. It then calls the simple_print_buffer function to print
 * the contents of the buffer in hexadecimal format. Next, it uses the _memset
 * function to set the values of the first 95 bytes of the buffer to 0x01. Finally,
 * it calls the simple_print_buffer function again to print the contents of the
 * buffer after it has been modified. The function returns 0 upon completion.
 */
int main(void)
{
  char buffer[98] = {0x00}; // Initialize a buffer of size 98 with all values set to 0x00.

  simple_print_buffer(buffer, 98); // Print the contents of the buffer in hexadecimal format.
  _memset(buffer, 0x01, 95); // Set the first 95 bytes of the buffer to 0x01.
  printf("-------------------------------------------------\n");
  simple_print_buffer(buffer, 98); // Print the contents of the modified buffer in hexadecimal format.

  return (0); // Return 0 to indicate successful program completion.
}
