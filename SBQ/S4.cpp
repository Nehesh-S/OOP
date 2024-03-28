#include <iostream>
using namespace std;

class Employee
{
    int basicSalary, allowances, deductions;

    public:
        void setBasicSalary(int sal)
        {
            basicSalary = sal;
        }
        void setAllowances(int all)
        {
            allowances = all;
        }
        void setDeductions(int ded)
        {
            deductions = ded;
        }
        int calculateNetSalary()
        {
            return basicSalary + allowances - deductions;
        }
};

int main()
{
    Employee emp;
    int tmp;
    cout << "Enter Basic Salary: ";
    cin >> tmp;
    emp.setBasicSalary(tmp);
    cout << "Enter Allowances: ";
    cin >> tmp;
    emp.setAllowances(tmp);
    cout << "Enter Deductions: ";
    cin >> tmp;
    emp.setDeductions(tmp);

    cout << "\nNet Salary: " << emp.calculateNetSalary();
}
