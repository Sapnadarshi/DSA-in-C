#include<iostream>
#include<string>
using namespace std;

//constructor outside the class

class student{
	public:
		string name;
		string stream;
		int roll;
		int year;
	student();
	void display();
};
	student::student(){
		cout<<"Student's Name"<<endl;
		cin>>name;
		cout<<"Student's Stream"<<endl;
		cin>>stream;
		cout<<"Student's roll"<<endl;
		cin>>roll;
		cout<<"Acedemic year"<<endl;
		cin>>year;
	}
	void student::display(){
		cout<<name<<"\t"<<stream<<"\t"<<roll<<"\t"<<year<<"\t";
	}

int main(){
	student bandhan;
	bandhan.display();
}
