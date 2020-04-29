#include <stdio.h>
#include <windows.h>


int main(){

	int val1 = 0, val2 = 0;
	char chVal1[100];
	char chVal2[100];
	FILE *fileP;	//file pointer

	fileP = fopen("D:\\userFile.txt", "w");

	//check file is ready or not
	if (fileP == NULL) {
		printf("File couldnt created");
	}
	else{
		printf("File is created");
	}
	printf("\n\r");

	printf("Enter your name and age\n\r");
	scanf("%s%d", &chVal1,&val1);
	//write to file
	fprintf(fileP, "Ad: %s Yas: %d\n", chVal1, val1);
	fclose(fileP); //close the file

	//__________________________

	//read to file 
	fileP = fopen("D:\\userFile.txt", "r"); 
	fscanf(fileP, "%s%d", &chVal2, &val2);
	printf("File data: %s%d\n\r", chVal2, val2);

	fclose(fileP);
	system("pause");
	return 0;
}