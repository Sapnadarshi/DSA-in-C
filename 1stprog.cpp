#include<iostream>

using namespace std;

int radius(int s){
	cout<<3.14*s*s;
	
}

int simpleInterset(float p, float r, float t){
	cout<<(p*r*t)/100;
	}

int main(){
	float p;
	float r;
	float t;
	float s;
	
	cout<<"Enter the principle: \n";
	cin>>p;
	
	cout<<"Enter the interset rate: \n";
	cin>>r;
	
	cout<<"Enter the time: \n";
	cin>>t;
	
	cout<<"Simple interset: \n";
	simpleInterset(p,r,t);
	cout<<"\n";
	
	cout<<"Enter the radious: \n";
	cin>>s;
	cout<<"Area of a circle\n"; radius(s);
	
}
