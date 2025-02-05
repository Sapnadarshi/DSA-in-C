#include<stdio.h>
#include<string.h>
//initializing structure
struct student{
	int roll;
	float CGPA;
	char name[100];
};

int main(){
	
	struct student S1={62,6.8,"deep"};
	printf("student roll\nCGPA\nname\n%d\n%f\n%s\n",S1.roll, S1.CGPA, S1.name);
	
	return 0;
}

