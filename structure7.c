#include<stdio.h>
#include<string.h>

int main(){
	int i;
	typedef struct pokemon{
		int HP;
		int Speed;
		int attack;
		char name[10];
	}pokemon;
	
	pokemon arr[3];
	
		strcpy(arr[0].name,"Pikachu");
		arr[0].HP=100;
		arr[0].attack=60;
		arr[0].Speed=150;
		
		
		strcpy(arr[1].name,"Charizad");
		arr[1].HP=300;
		arr[1].attack=40;
		arr[1].Speed=90;
		
		strcpy(arr[2].name,"Mewtwo");
		arr[2].HP=150;
		arr[2].attack=80;
		arr[2].Speed=200;
		
		
		for(i=0;i<3;i++){
			printf("Pokemon Name is %s\n",arr[i].name);
			printf("HP is %d\n",arr[i].HP);
			printf("Attack is %d\n",arr[i].attack);
			printf("Speed is %d\n",arr[i].Speed);
			
			
		}
		
	
	return 0;
}
