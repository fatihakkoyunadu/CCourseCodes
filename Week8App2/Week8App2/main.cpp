#include <stdio.h>

int main()
{
	printf("\nLoops / While loop\n\n\n");

	
	int i = 0;  

	printf("\nPrinting the numbers using while loop from 0 to 9\n\n");

	/*
	while i is less than 10
	*/
	while (i<10)
	{
		printf("%d\n", i);

		//Update i for each step 
		i++;    // or i=i+1; or i+=1;
	}


	getchar();
	return 0;
}