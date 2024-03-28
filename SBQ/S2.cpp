#include <iostream>
using namespace std;

class student
{
    int roll;
    char name[10];

    public:
        void getData();
        void putData();
};

void student::getData()
{
    cout << "Roll No and Name: ";
    cin >> roll >> name;
}

void student::putData()
{
    cout << roll << "\t\t" << name << endl;
}

int main()
{
    student s[10];

    cout << "\nEnter Students Data:\n";
    for(int i = 0; i < 10; i++)
        s[i].getData();
    
    cout << "\nEntered Students Data:\n";
    cout<< "ROLL NO \t" << "NAME \n";

    for(int i = 0; i < 10; i++)
        s[i].putData();
}