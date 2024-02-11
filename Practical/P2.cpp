#include <iostream>
using namespace std;

#define MAX 5

class student
{
    private:
        int roll;
        char name[10];
        float percent;

    public:
        void getData();
        void putData();
};

void student::getData()
{
    cout << "Enter Student Details: \n";
    cout << "Roll No: ";
    cin >> roll;
    cout << "Name: ";
    cin >> name;
    cout << "Percentage: ";
    cin >> percent;
    cout << "Student Details Stored\n";
}

void student::putData()
{
    cout << roll << "\t\t" << name << "\t" << percent << endl;
}

int main()
{
    student s[MAX];
    int op, i, size = 0;
    cout << "\nAvailable Operations: \n";
    cout << "1. Add Student \n";
    cout << "2. Display Students \n";
    cout << "3. Exit \n";

    while(true)
    {
        cout << "\nEnter Operation: ";
        cin >> op;
        cout << endl;
        switch(op)
        {
            case 1:
                if(size == MAX+1)
                {
                    cout << "List Full";
                    break;
                }
                s[size].getData();
                size++;
                break;
                
            case 2:
                cout<< "ROLL NO \t" << "NAME \t" << "PERCENTAGE \n";
                for(i = 0; i < size; i++)
                {
                    s[i].putData();
                }
                break;
                
            case 3:
                return 0;
            
            default:
                cout << "Invalid Selection";
        }
    }
}