#include <stdio.h>
#include <stdlib.h>
/**
 * main - program
 * @argc: argcountedddddr
 * @argv: argvalues
 * Return: Always 0 jkkk
 */
int main(int argc, char *argv[])
{
int y1;
int y2;
int i;
for (i = 0; i < argc; i++)
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
y1 = atoi(argv[1]);
y2 = atoi(argv[2]);
printf("%d\n", y1 *y2);
return (0);
}
