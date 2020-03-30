#include <stdio.h>

int main()
{
	printf("\n Loops/Do While loop\n\n\n");


	int i = 10; 

	do // do before comparing the condition
	{
		printf("i = %d\n", i);
		i = i - 1;    // update condition variable
	}
	// while loop only contains the condition
	while (i > 0);

	printf("\n\The value of i after exiting the loop is %d\n\n", i);

	getchar();

	return 0;
}