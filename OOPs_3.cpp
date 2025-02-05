#include<iostream>
#include<string>
using namespace std;

//parameterized constructor inside 

//class point{
//	private:
//		int x;
//		int y;
//	public:
//	point(int a,int b){
//		x=a;
//		y=b;
//	}
//	int getX(){return x;};
//	int getY(){return y;};
//
//};
//int main(){
//	point p(10,15);
//	cout<<p.getX()<<endl;
//	cout<<p.getY();
//}

 
// class definition
class student {
    int rno;
    string name;
    double fee;
 
public:
    student(int, string, double);
    void display();
};
 
// parameterized constructor outside class
student::student(int no,string Name, double f)
{
    rno = no;
    Name=name;
    cin>>name;
    fee = f;
}
 
void student::display()
{
    
    cout << endl << rno << "\t" << name << "\t" << fee;
}
 
// driver code
int main()
{
    student s(1001,"",10000);
    s.display();
    return 0;
}
