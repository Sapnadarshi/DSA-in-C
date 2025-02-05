#include<stdio.h>
#include<string.h>
//syntax of structure

struct student{
	int roll;
	float CGPA;
	char name[100];
};

int main()
{
	struct student S1;
	S1.roll=14;
	S1.CGPA=7.5;
	strcpy(S1.name,"Bandhan");
	printf("student name is=%s\n", S1.name);
	printf("student roll is=%d\n", S1.roll);
	printf("student CGPA is=%f\n", S1.CGPA);
	
	return 0;
}
