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
            cout << "Department: " << dept << endl;
        }
};

class emp_salary: public emp_address, public emp_dept
{
    public:
        double salary;

        void getsal()
        {
            cout << "Enter Salary: ";
            cin >> salary;
        }
        void putsal()
        {
            cout << "Salary: " << salary;
        }
};

int main()
{
    emp_salary emp;
    employee emp1;
    emp1.getdata();
    emp.getadd();
    emp.getdept();
    emp.getsal();
    emp1.putdata();
    emp.putadd();
    emp.putdept();
    emp.putsal();
}