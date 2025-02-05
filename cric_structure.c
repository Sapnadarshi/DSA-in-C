#include<stdio.h>
#include<string.h>

int main(){
	int i;
	typedef struct cricketer{
		char name[10];
		int matches_played;
		int age;
		float avarage;
		}cricketer;
	
	cricketer arr[3];
	
		for(i=0;i<3;i++){
			scanf("%s", &arr[i].name);
			scanf("%d", &arr[i].matches_played);
			scanf("%d", &arr[i].age);
			scanf("%f", &arr[i].avarage);
		}
		
		for(i=0;i<3;i++){
			printf("Name: %s\n",arr[i].name);
			printf("matches played: %d\n",arr[i].matches_played);
			printf("age: %d\n",arr[i].age);
			printf("avarage: %f\n",arr[i].avarage);
			
		}
		return 0;
}
