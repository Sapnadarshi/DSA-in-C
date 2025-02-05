#include <iostream>
#include <string>
using namespace std;
class STUDENT {
  public:
  	string name;
    int rollNo;
    int marks[3];
    void getdata() {
        cout << "Enter the Roll Number: ";
        cin >> rollNo;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Marks: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    void putdata() {
        cout << "\nName of Student: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nMarks in Subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
    }

    void tabulate() {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        float percentage = (float)total / 3;
        cout << "\nTotal Marks: " << total<<endl;
        cout << "\nPercentage:  " << percentage<<endl;
    }
};

int main() {
    STUDENT s[5];
    for(int k=0;k<5;k++){
    	cout << "Enter details: "<<k+1<<":\n";
    	s[k].getdata();
    }
    for(int k=0;k<5;k++){
    	cout << "\n\nDetails of the StudentS\n "<<k+1<<":\n";
    	s[k].tabulate();
    }
    return 0;
}

