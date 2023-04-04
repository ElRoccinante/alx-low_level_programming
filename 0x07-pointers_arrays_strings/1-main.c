#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the contents of a buffer in hexadecimal format
 * @buffer: A pointer to the buffer to print
 * @size: The number of bytes to print from the buffer
 *
 * Description: This function prints the contents of a buffer in hexadecimal format,
 * with each byte separated by a space. If the buffer contains more than 10 bytes, a
 * newline is printed after every 10 bytes. The function assumes that the buffer contains
 * at least @size bytes.
 */
void print_buffer(char *buffer, unsigned int size)
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
 * main - Entry point of the program
 *
 * Description: This program tests the _memcpy function by copying 10 bytes
 * from buffer2 to buffer starting at position 50. The contents of the buffers
 * are then printed before and after the copy operation.
 *
 * Return: Always 0
 */
int main(void)
{
  char buffer[98] = {0};
  char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

  printf("Before copy:\n");
  print_buffer(buffer, 98);
  
  _memcpy(buffer + 50, buffer2, 10);

  printf("After copy:\n");
  print_buffer(buffer, 98);    
  return (0);
}  
