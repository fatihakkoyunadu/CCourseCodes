#include <stdio.h>

int main()
{
	int num1;

	printf("Please enter a number: \n");
	scanf("%d", &num1);
	if (num1 > 0)
		printf("%d is a positive number \n", num1);
	else if (num1 < 0)
		printf("%d is a negative number \n", num1);
	else
		printf("0 has no sign");


	getchar();
	getchar();
	return 0;
}