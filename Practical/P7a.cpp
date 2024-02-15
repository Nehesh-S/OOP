#include <iostream>
using namespace std;

class employee
{
    public:
        int id;
        char name[10];

        void getdata()
        {
            cout << "Enter Emp ID and Name: \n";
            cin >> id >> name;
        }
        void putdata()
        {
            cout << "\nEmp ID: " << id << endl;
            cout << "Name: " << name << endl; 
        }
};

class emp_address: public employee
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

class emp_dept: public employee
{
    public:
        char dept[10];

        void getdept()
        {
            cout << "Enter Department: ";
            cin >> dept;
        }
        void putdept()
        {
            cout << "Department: " << dept;
        }
};

int main()
{
    emp_address emp1;
    emp_dept emp2;
    emp1.getdata();
    emp1.getadd();
    emp2.getdept();
    emp1.putdata();
    emp1.putadd();
    emp2.putdept();
}