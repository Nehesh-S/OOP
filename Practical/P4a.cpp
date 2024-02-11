#include <iostream>
using namespace std;

class shape
{
    public:
        shape(int l, int b)
        {
            cout << "Area of Rectangle = " << l*b << endl;

        }

        shape(int a)
        {
            cout << "Area of Square = " << a*a << endl;
        }
};

int main()
{
    int a, b;
    cout << "Enter Dinemsions of Rectangle:\n";
    cin >> a >> b;
    shape rec(a, b);
    cout << "Enter side of Square:\n";
    cin >> a;
    shape sq(a);
}