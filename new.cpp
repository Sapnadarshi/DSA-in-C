#include<iostream>
using namespace std;

int a;
int x,y,z;
int oddoreven(int a){
	if(a%2==0){
		cout<<"The number is even\n";
	}
	else{
		cout<<"The number is odd\n";
	}
}

int greatest(int x, int y, int z){
	int max=x;
	if(max<y){
		max=y;
	}
	if(max<z){
		max=z;
	}
	cout<<"Greatest number is\n"<<max;
}

int main()
{
	cout<<"Enter The Number\n";
	cin>>a;
	oddoreven(a);
	cout<<"Enter x\n";
	cin>>x;
	cout<<"Enter y\n";
	cin>>y;
	cout<<"Enter z\n";
	cin>>z;
	greatest(x,y,z);
}
