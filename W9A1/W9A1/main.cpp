#include <stdio.h>


int main() {
	

	int myArr[3][4] = { { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } };
	int val1 = 0;

	//printf("Size of Array: %i\n\r", sizeof(myArr));
	//printf("Size of Array[0]: %i\n\r", sizeof(myArr[0]));
	//printf("Size of Array[0][0]: %i\n\r", sizeof(myArr[0][0]));

	printf("Size of Array[0]: %i\n\r", sizeof(myArr) / sizeof(myArr[0]));	//for Rows
	printf("Size of Array[0][0]: %i\n\r", sizeof(myArr[0]) / sizeof(myArr[0][0]));	// for Cols

	for (int i = 0; i < sizeof(myArr) / sizeof(myArr[0]); i++){
		for (int j = 0; j < sizeof(myArr[0]) / sizeof(myArr[0][0]); j++){
			myArr[i][j] = (i+1)*(j+1);
			printf("myArr[%i][%i]=%i\t", i, j, myArr[i][j]);
		}
		printf("\n\r");
	}
	//	myArr[i][]

	//////init Array
	////for (int i = 0; i < sizeof(myArr)/sizeof(myArr[0]); i++){
	////	printf("%i degeri giriniz:",i);
	////	scanf("%d", &val1);
	////	myArr[i] = val1;
	////}

	////for (int i = 0; i < sizeof(myArr) / sizeof(myArr[0]); i++){
	////	myArr[i] = myArr[i] * 2;  //*=
	////}

	////for (int i = 0; i < sizeof(myArr) / sizeof(myArr[0]); i++){
	////	printf("myArr[%d] degeri: %i\n\r", i, myArr[i]);
	////}



	getchar();
	getchar();
	return (0);
}