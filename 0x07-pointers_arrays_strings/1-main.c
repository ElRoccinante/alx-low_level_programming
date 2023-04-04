#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints a buffer of data in hexadecimal format
 * @buffer: pointer to the address of the buffer to print
 * @size: size of the buffer in bytes
 *
 * Description: This function prints the contents of a buffer in hexadecimal
 * format. Each byte in the buffer is printed as a 2-digit hexadecimal number
 * with a leading "0x". The function also formats the output to print the bytes
 * in rows of 10, with each row separated by a space and each set of 10 rows
 * separated by a newline character.
 *
 * Return: void
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
        {
          // Print a space character between each byte in a row
	  printf(" ");
        }
      if (!(i % 10) && i)
        {
          // If we've printed 10 bytes, start a new row
	  printf("\n");
        }
      // Print the current byte in hexadecimal format with a leading "0x"
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

/**
 * main - entry point for the program
 *
 * Description: This program demonstrates the use of the _memcpy function by
 * copying a small buffer of data into a larger buffer and printing the
 * contents of the resulting buffer before and after the copy operation.
 *
 * Return: 0 on success
 */
int main(void)
{
  // Declare two buffers - one with all zeros and one with some data
  char buffer[98] = {0};
  char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

  // Print the contents of the first buffer
  printf("Contents of buffer before _memcpy:\n");
  simple_print_buffer(buffer, 98);

  // Use the _memcpy function to copy 10 bytes from buffer2 to buffer+50
  _memcpy(buffer + 50, buffer2, 10);

  // Print the contents of the modified buffer
  printf("-------------------------------------------------\n");
  printf("Contents of buffer after _memcpy:\n");
  simple_print_buffer(buffer, 98);    

  return (0);
}
