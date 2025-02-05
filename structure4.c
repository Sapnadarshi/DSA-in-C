#include<stdio.h>
#include<string.h>
//structure using pointers
//usage of arrow pointer
struct student{
	int roll;
	float CGPA;
	char name[100];
};

int main(){
	
	struct student S1={62,6.8,"deep"};
	struct student*ptr=&S1;
	printf("student roll is %d\n",(*ptr).roll);
	printf("student roll is %d\n",ptr->roll);
	printf("student CGPA is %f\n",ptr->CGPA);
	printf("student name is %s\n",ptr->name);
	return 0;
}

