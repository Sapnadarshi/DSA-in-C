#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
	int i;
	typedef struct date{
		int day;
		int month;
		int year;
		}date;
	
	date a,b;
	
		a.day=5;
		a.month=11;
		a.year=1997;
		
		b.day=5;
		b.month=11;
		b.year=1997;
		
		bool flag=true;
		if(a.day!=b.day) flag=false;
		if(a.month!=b.month) flag=false;
		if(a.year!=b.year) flag=false;
		
		if(flag==true)
		printf("dates are same");
		else
		printf("dates are different");
		
	return 0;
}
