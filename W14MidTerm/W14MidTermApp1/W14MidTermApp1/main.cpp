#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
//user Input Function
int getUserInput(void);
//user Input Function
void getUserInput2(void);

int main(){

	int a= getUserInput();
	getUserInput2();
	system("pause");

	getchar();
	getchar();
	return 0;
} //end of the main 

//user Input Function
int getUserInput(void) {
	int val1 = 0;
	char str[20];
	scanf("%i", &val1);
	itoa(val1, str, 10);
	printf("F1 -String Val %s   \n\r", str);

	return val1;
}
//user Input Function
void getUserInput2(void) {
	int val1 = 0;
	char str[20];
	scanf("%s", &str);
	val1 = atoi(str);
	printf("F2 -Integer Val %i   \n\r", val1);
}




//one line commnet
/*
multiple lines
*/

// %i integer (0b 0X 0 10base)
// %d integer (10 base)
// %f float	  (2.0f)
// %lf double  (2.0f)
// %c char  ('a')  // char[0]
// %s char array ("str")