#include<stdio.h>

int main()
{
	int			val1 = 125;
	float		val2 = 125.50f;
	double		val3 = 125.500f;
	char		ch1 = 'A';
	char		ch2[10] = "Test1";
	printf("\nCounter: %10d ", val1);
	printf("\nCounter: %10c ", ch1);
	printf("\nCounter: %10s ", &ch2);
	printf("\nCounter: %10.2f ", val2);
	printf("\nCounter: %10.4lf ", val3);
	getchar();

}