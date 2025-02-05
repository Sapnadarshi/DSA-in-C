#include <iostream>
#include <string>
using namespace std;
 
class STUDENT{
private:
	int rollNo;
    string name;
    float marks[5];
 
public:
    void getdata() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks in three subjects: ";
        cin >> marks[0] >> marks[1] >> marks[2];
    }
 	void tabulate() {
        marks[3] = marks[0] + marks[1] + marks[2];
        marks[4] = (marks[3] / 300) * 100;
    }
 	void putdata() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in three subjects: " << marks[0] << "\t" << marks[1] << "\t" << marks[2] << endl;
        cout << "Total Marks: " << marks[3] << "\tPercentage: " << marks[4] << endl;
    }
};
 
int main() {
    STUDENT students[5];
    cout << "Enter details for 5 students:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].getdata();
        students[i].tabulate();
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].putdata();
    }
    return 0;
}
