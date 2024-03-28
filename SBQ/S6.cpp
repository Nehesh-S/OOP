#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    public:
        Student(string n = "Unknown")
        {
            name = n;
        }

        void put()
        {
            cout << "Name: " << name << endl;
        }
};

int main()
{
    Student s1("Nehesh");
    Student s2;
    s1.put();
    s2.put();
}