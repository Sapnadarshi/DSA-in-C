#include<stdio.h>
#include<string.h>
//syntax of structure
struct student{
	int roll;
	float CGPA;
	char name[100];
};

main()
{
	struct student S1;
	S1.roll=14;
	S1.CGPA=7.5;
	strcpy(S1.name,"Bandhan");
	
	printf("student name is=%s\n", S1.name);
	printf("student roll is=%d\n", S1.roll);
	printf("student CGPA is=%f\n", S1.CGPA);
	
	printf("\n");
	
	
	struct student S2;
	S2.roll=15;
	S2.CGPA=6.9;
	strcpy(S2.name,"riya");
	
	printf("student name is=%s\n", S2.name);
	printf("student roll is=%d\n", S2.roll);
	printf("student CGPA is=%f\n", S2.CGPA);
	
	printf("\n");
	
	
	struct student S3;
	S3.roll=16;
	S3.CGPA=8.1;
	strcpy(S3.name,"Rahul");
	
	printf("student name is=%s\n", S3.name);
	printf("student roll is=%d\n", S3.roll);
	printf("student CGPA is=%f\n", S3.CGPA);
	
	printf("\n");
	
	return 0;
}
