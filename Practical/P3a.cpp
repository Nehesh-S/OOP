#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length, breadth;

    public:
        void area()
        {
            cout << "Area = " << length*breadth << endl;
        }
        Rectangle()
        {
            length = breadth = 0;
        }

        Rectangle(int l, int b)
        {
            length = l;
            breadth = b;
        }
        Rectangle(int l)
        {
            length = breadth = l;
        }
};

int main()
{
    int l, b;

    cout << "Without Parameters: \n";
    Rectangle r1;
    r1.area();

    cout << "\nEnter 2 Parameters: ";
    cin >> l >> b;
    Rectangle r2(l, b);
    r2.area();

    cout << "\nEnter 1 Parameter: ";
    cin >> l;
    Rectangle r3(l);
    r3.area();    
}