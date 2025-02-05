#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		string name;
		string stream;
		int roll;
		int year;
};

int main(){
	student Student;
	Student.name="Sapadarshi";
	cout<<Student.name<<"\n";
	Student.stream="CSBS";
	cout<<Student.stream<<"\n";
	Student.roll=14;
	cout<<Student.roll<<"\n";
	Student.year=2024;
	cout<<Student.year<<"\n";
}
