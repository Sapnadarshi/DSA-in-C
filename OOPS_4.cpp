#include<iostream>

using namespace std;

class complex{
	private: int real;int image;
	public:complex(int r=0,int i=0){
		real=r;
		image=i;
	}
	void print(){
		cout<<real<<"+"<<image<<"i"<<endl;
	}
	friend complex operator+(complex const &c1,complex const&c2);
};

complex operator+(complex const &c1,complex const &c2){
	return complex(c1.real+c2.real,c1.image+c2.image);
}

int main(){
	complex c1(10,5),c2(20,8);
	complex c3=c1+c2;
	c3.print();
}
