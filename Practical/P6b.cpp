#include <iostream>
using namespace std;

class student
{
    public:
        int roll;
        char name[10];

        void getdata()
        {
            cout << "Enter Roll No. and Name: \n";
            cin >> roll >> name;
        }
        void putdata()
        {
            cout << "\nRoll Number: " << roll << endl;
            cout << "Name: " << name << endl; 
        }
};

class student_address: public student
{
    public:
        char add[20];

        void getadd()
        {
            cout << "Enter Address: ";
            cin >> add;
        }
        void putadd()
        {
            cout << "Address: " << add << endl;
        }
};

class student_DoB: public student_address
{
    public:
        int day, month, year;

        void getdob()
        {
            cout << "Enter DOB (Date, Month, Year): ";
            cin >> day >> month >> year;
        }
        void putdob()
        {
            cout << "DOB: " << day << "/" << month << "/" << year;
        }
};

int main()
{
    student_DoB stu;
    stu.getdata();
    stu.getadd();
    stu.getdob();
    stu.putdata();
    stu.putadd();
    stu.putdob();
}