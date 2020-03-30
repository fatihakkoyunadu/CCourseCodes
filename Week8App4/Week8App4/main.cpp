#include<stdio.h>

int main()
{
	printf("\n Loops/Nested For loops\n\n\n");
	printf("\n for Printing a pattern in c. \n\n");
	printf("\n for Printing and manupulationg a matrix using a 2 dimensional array. \n\n");

	int i, j, k;
	printf("\n\nOutput of the for loops are :\n\n");
	for (i = 0; i < 5; i++)
	{
		printf("\t\t\t\t");
		for (j = 0; j < 5; j++)
			printf("X ");

		printf("\n");
	}

	getchar();
	return 0;
}