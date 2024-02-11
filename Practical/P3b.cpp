#include <iostream>
using namespace std;

class bank
{
    private:
        int amount = 50;

    public:
        void display()
        {
            cout << "Balance = " << amount << endl;
        }

        bank(int credit = 0)
        {
            amount += credit;
        }
};

int main()
{
    int a;
    cout << "Without Parameter:\n";
    bank b1;
    b1.display();

    cout << "\nEnter Amount to add: ";
    cin >> a;
    bank b2(a); 
    b2.display();
}