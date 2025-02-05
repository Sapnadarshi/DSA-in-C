#include<stdio.h>
#include<string.h>
//passing structure in a function
struct student{
	int roll;
	float CGPA;
	char name[100];
};

void printinfo(struct student S1);

int  main(){
	struct student S1={41,6.5,"'bandhan'"};
	printinfo(S1);
//we have to make change in main function
	S1.CGPA=7.8;
	printf("student CGPA is %f\n", S1.CGPA);
	strcpy(S1.name,"ankita");
	printf("student name is %s", S1.name);

	
	return 0;
}
void printinfo(struct student S1){
	printf("Details of the students\n");
	printf("roll of styudent is %d\n", S1.roll);
	printf("CGPA of student is %f\n", S1.CGPA);
	printf("Name of the student is %s\n", S1.name);
	
}

