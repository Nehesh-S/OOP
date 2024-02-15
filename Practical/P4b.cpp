#include <iostream>
using namespace std;

class Bill
{
    private:
        int house_no;
        char name[10];
    public:
        void get()
        {
            cout << "Enter House Number: ";
            cin >> house_no;
            cout << "Enter Name: ";
            cin >> name;
        }
        void display()
        {
            cout << "\nHouse Number: " << house_no << endl;
            cout << "Name: " << name << endl;
        }
        void display(int unit)
        {
            int rate = 10;
            if (unit > 100)
                rate = 20;
            else if (unit > 200)
                rate = 30;
            else if (unit > 300)
                rate = 40;
            else
                rate = 50;

            cout << "Bill Amount: " << unit*rate;
        }
};

int main()
{
    Bill p1;
    int unit;
    p1.get();
    cout << "Enter Units Used: ";
    cin >> unit;
    p1.display();
    p1.display(unit);
}
