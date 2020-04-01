#include <stdio.h>


struct Students {

	char name[20];
	int id;
	float marksMidTerm;
	float marksFinal;
	float courseGrade;

} stu1;


void getStudentData(void);
float calcStudentResult(void);

int main(){

	//Student Data
	getStudentData();
	//Calculated Result
	stu1.courseGrade=calcStudentResult();

	printf("\n\r\n\r Results of the student:");
	printf("\n\r Student Name	: %s",stu1.name);
	printf("\n\r Student ID		: %d", stu1.id);
	printf("\n\r Student Grade	: %.2f", stu1.courseGrade);

	getchar();
	getchar();
	return 0;
}

void getStudentData(void){

	//Student name
	printf("\n\r Please enter your name:");
	scanf("%s", &stu1.name);
	printf("\n\r Your name is %s", stu1.name);

	//Student ID
	printf("\n\r Please enter your ID:");
	scanf("%d", &stu1.id);
	printf("\n\r Your id is %d", stu1.id);

	//Student Mid-Term 
	printf("\n\r Please enter your Mid-Term Mark:");
	scanf("%f", &stu1.marksMidTerm);
	printf("\n\r Your Mid-Term is %.2f", stu1.marksMidTerm);

	//Student Final
	printf("\n\r Please enter your Final Mark:");
	scanf("%f", &stu1.marksFinal);
	printf("\n\r Your Final is %.2f", stu1.marksFinal);

}


float calcStudentResult(void){

	float result = ((0.4*stu1.marksMidTerm) + (0.6 *stu1.marksFinal));

	return result;
}
