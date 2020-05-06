#include<stdio.h>
#include<Windows.h>
int main()
{
	
	//itoa(val1, charVal, 10);
	//int val1 = atoi(charVal);

	int arr1[5];
	int val1 = 0;
	int minValue = 0;
	int maxValue = 0;
	
	//init the array
	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++){
		arr1[i] = 0;
	}

	//input fromt the use
	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++){
		printf("\n Please enter value for arr1[%i]:", i);
		scanf("%d", &val1);
		arr1[i] = val1;
		printf("\t You enterd: %10d ", val1);
	}

	//printing all data
	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++){

		printf("\nArr (%i) Values: %10d ", i, arr1[i]);
	}

	minValue = arr1[0];
	maxValue = arr1[0];

	printf("\nArr size: %10d ", sizeof(arr1));
	printf("\nArr size: %10d ", sizeof(arr1[0]));

	//for comparison
	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++){
		//if smaller
		if (arr1[i] < minValue) minValue = arr1[i];
		//if bigger
		if (arr1[i] > maxValue) maxValue = arr1[i];
	}
	printf("\nMin Value: %10d ", minValue);
	printf("\nMax Value: %10d ", maxValue);

	//int			val1 = 125;
	//float		val2 = 125.50f;
	//double		val3 = 125.500f;
	//char		ch1 = 'A';
	//char		ch2[10] = "Test1";
	//printf("\nCounter: %10d ", val1);
	//printf("\nCounter: %10c ", ch1);
	//printf("\nCounter: %10s ", &ch2);
	//printf("\nCounter: %10.2f ", val2);
	//printf("\nCounter: %10.4lf ", val3);
	printf("\n\r");
	system("pause");
}