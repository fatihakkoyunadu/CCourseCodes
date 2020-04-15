#include <stdio.h>


int main() {
	
	float arr01[10][10];
	int arrRow, arrCol = 0;
	float arrVal1 = 0;
	float totalVal = 0.0f;
	int inputCount = 3;


	printf("Size of Array[0]: %i\n\r", sizeof(arr01) / sizeof(arr01[0]));	//for Rows
	printf("Size of Array[0][0]: %i\n\r", sizeof(arr01[0]) / sizeof(arr01[0][0]));	// for Cols

	for (int i = 0; i < sizeof(arr01) / sizeof(arr01[0]); i++){
		for (int j = 0; j < sizeof(arr01[0]) / sizeof(arr01[0][0]); j++){
			arr01[i][j] = 0.0f;
		}
	}

	printf("Diziye atanacak degerlerin sayisini giriniz:");
	scanf("%d", &inputCount);

	for (int k = 0; k < inputCount; k++) {
		printf("Dizinin satir indisini giriniz:");
		scanf("%d", &arrRow);
		printf("Dizinin sutun indisini giriniz:");
		scanf("%d", &arrCol);
		printf("Deðiþkenin degerini giriniz:");
		scanf("%f", &arrVal1);
		arr01[arrRow][arrCol] = arrVal1;
	}

	for (int i = 0; i < sizeof(arr01) / sizeof(arr01[0]); i++){
		for (int j = 0; j < sizeof(arr01[0]) / sizeof(arr01[0][0]); j++){
			if (arr01[i][j]>0) {
				printf("Arr01[%i][%i]: %10.2f \n\r", i, j, arr01[i][j]);
				totalVal += arr01[i][j];
				printf("Total Val : %10.2f \n\r", totalVal);
			} // if arr val exist
		} //loop j 
	} //loop i

	float avgVal = totalVal / inputCount;
	printf("Average Val : %10.2f \n\r", avgVal);

	//int sizeOfArr01 = sizeof(arr01) / sizeof(arr01[0]);

	//for (int i = 0; i < sizeOfArr01; i++){
	//	printf("Dizinin degerleri arr01[%i]: %10.2f \n\r",i, arr01[i]);
	//}


	//int myArr[3][4] = { { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } };
	//int val1 = 0;


	////printf("Size of Array: %i\n\r", sizeof(myArr));
	////printf("Size of Array[0]: %i\n\r", sizeof(myArr[0]));
	////printf("Size of Array[0][0]: %i\n\r", sizeof(myArr[0][0]));

	//printf("Size of Array[0]: %i\n\r", sizeof(myArr) / sizeof(myArr[0]));	//for Rows
	//printf("Size of Array[0][0]: %i\n\r", sizeof(myArr[0]) / sizeof(myArr[0][0]));	// for Cols

	//for (int i = 0; i < sizeof(myArr) / sizeof(myArr[0]); i++){
	//	for (int j = 0; j < sizeof(myArr[0]) / sizeof(myArr[0][0]); j++){
	//		myArr[i][j] = (i+1)*(j+1);
	//		printf("myArr[%i][%i]=%i\t", i, j, myArr[i][j]);
	//	}
	//	printf("\n\r");
	//}
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