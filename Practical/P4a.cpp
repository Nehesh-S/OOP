#include <iostream>
using namespace std;

class shape
{
    public:
        void area(int l, int b)
        {
            cout << "Area of Rectangle = " << l*b << endl;
        }

        void area(int a)
        {
            cout << "Area of Square = " << a*a << endl;
        }
};

int main()
{
    int a, b;
    cout << "Enter Dinemsions of Rectangle:\n";
    cin >> a >> b;
    shape rec;
    rec.area(a, b);
    cout << "Enter side of Square:\n";
    cin >> a;
    shape sq;
    sq.area(a);
}