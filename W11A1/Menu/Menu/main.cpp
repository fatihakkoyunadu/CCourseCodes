#include <stdio.h>
#include <stdlib.h>



void sumFunc(void);
void multFunc(void);

int main(void){

	char userInput[10];
	
	while (true) {
		system("cls");
		printf("*************************");
		printf("\n\tMenu\n\n\r");
		printf("\t1- Option 1\n\r");
		printf("\t2- Option 2 -Mult func\n\r");
		printf("\t3- Option 3 -Sum func\n\r");
		printf("\t4- Option 4\n\r");
		printf("\t5- Option 5 (Quit)\n\n\r");
		printf("*************************\n");
		printf("Please choose an option (1-5):");

		scanf("%s1", &userInput);
		while ((getchar()) != '\n');

		// for exit
		if (userInput[0] == '5' || userInput[0] == 'q' || userInput[0] == 'Q') break;

		//printf("User Input Val: %c", userInput[0]);
		switch (userInput[0])
		{
		case '1':
			printf("\n\n 1. option\n");
			break;
		case '2':
			multFunc();
			break;
		case '3':
			sumFunc();
			break;
		case '4':
			printf("\n\n 4. option\n");
			break;
		case '5':
			printf("\n\n 5. option\n");
			break;
		default:
			printf("\n\n  \a Invalid selection... Please enter a number from the list\n");
			break;
		}
		getchar();
	} //while end.

	printf("\n"); 
	system("pause");
	return (0);
}


void sumFunc(void){

	int val1, val2;

	printf("\n\n -Sum func.\n");
	printf("-Enter num 1:");
	scanf("%i", &val1);
	printf("-Enter num 2:");
	scanf("%i", &val2);

	int result = val1 + val2;
	printf("\n\n -Result: %i \n", result);
	getchar();
}

void multFunc(void){

	int val1, val2;

	printf("\n\n -Mult func.\n");
	printf("-Enter num 1:");
	scanf("%i", &val1);
	printf("-Enter num 2:");
	scanf("%i", &val2);

	int result = val1 * val2;
	printf("\n\n -Result: %i \n", result);
	getchar();
}



