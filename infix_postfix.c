#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char str[50];
char stack[15];
int top=-1;
int j=0;
int k=0;
int i;

int order(char a){
    if(a =='^') return 3;
    if(a =='*'||a =='/') return 2;
    if(a == '+'||a == '-') return 1;
}
void push(char a){
    ++top;
    stack[top]=a;
}
char pop(){
    char r=stack[top];
    --top;
    return r;
}

void work(){
    for(i=0; str[i]!='\0'; i++)
        k++;

    for(j=0;j<k;j++){
        if(isalnum(str[j])){
            printf("%c",str[j]);
            continue;
        }

        if(str[j]=='('){  
		push(str[j]); 
		continue;
		}

        if((str[j]==')')){
            while(stack[top]!='('){
                printf("%c",pop());
            }
            char f=pop();
            continue;
        }

        if(str[j]=='*'||str[j]=='/'||str[j]=='+'||str[j]=='-'){
            if(stack[top]=='('){
                push(str[j]);
                continue;
            }
            lebel:
            if(order(str[j])<=order(stack[top])){
                printf("%c",pop());
                goto lebel;
            }
            push(str[j]);
            continue;
        }
    }
    while(top>-1){
        printf("%c",pop());
    }
}

void main(){
    printf("Enter postfix expression: ");
    scanf("%s",str);
    work();
}
