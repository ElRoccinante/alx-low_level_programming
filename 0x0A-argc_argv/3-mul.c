#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int y1, y2;

	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	y1 = atoi(argv[1]);
	y2 = atoi(argv[2]);
	printf("%d\n", (argc == 3) ? y1 * y2 : 0);

	return 0;
}
