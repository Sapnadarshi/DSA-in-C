#include<stdio.h>
#include<string.h>
//typedef function

typedef struct computersciencestudent{
	int roll;
	float CGPA;
	char name[100];
}CSE;
int main(){
	CSE S1;;
	S1.roll=1664;
	S1.CGPA=9.2;
	strcpy(S1.name,"bandhan");
	printf("student roll is %d", S1.roll);
	return 0;
}

