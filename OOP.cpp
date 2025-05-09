#include<iostream>
using namespace std;


class Student {
    private:
        int roll;
        string name;
        int marks;
    public:

        Student() {
            roll = 0;
            marks = 0;
            name = "Invalid";
        }

        Student(int r, string n, int m) {
            roll = r;
            name = n;
            marks = m;
        }


        // void setRoll(int r) {
        //     roll = r;
        // }

        int getRoll() {
            return roll;
        }

        string getName() {
            return name;
        }

        int getMarks() {
            return marks;
        }

        void print() {
            cout << "Student Name: " << name;
            cout << " ,Roll: " << roll;
            cout << " ,Marks: " << marks << endl;
        }

        friend ostream& operator << (ostream & os, Student s) {
            os << "Student name: " << s.name << " ,Roll: " << s.roll << " ,Marks: " << s.marks;
            return os;
        }

        // bool operator < (const Student & s) {
        //     return roll < s.roll;
        // }

        
};

struct compare {
    bool operator()(Student a, Student b) {
        return a.getRoll() < b.getRoll();
        // return a.getMarks() < b.getMarks();
    }
};


int main() {
    Student student1(1, "ABCD", 95);
    Student student2(3, "DC" , 80);
    // student1.roll = 10;
    // student1.name = "John";
    // student1.marks = 90;

    // cout << student1.roll << endl;

    // student1.roll = 15;

    // cout << student1.roll << endl;
    // student1.setRoll(10);
    // cout << student1.getRoll() << endl;
    // cout << student1.getName() << endl;
    // cout << student1.getMarks() << endl;
    // student1.print();
    // student2.print();

    // cout << student1 << endl;
    // cout << student2 << endl;

    // if(student1 < student2) {
    //     cout << student1 << endl;
    // } else {
    //     cout << student2 << endl;
    // }

    cout << min(student1,student2,compare()) << endl;
    cout << max(student1,student2,compare()) << endl;
}