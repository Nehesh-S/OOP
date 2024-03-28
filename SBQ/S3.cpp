#include <iostream>
using namespace std;

class Geometry
{
    public:
        float calculateTriangleArea(int l, int b)
        {
            return 0.5*l*b;
        }

        float calculateSquareArea(int s)
        {
            return s*s;
        }

        float calculateCircleArea(int r)
        {
            return 3.14*r*r;
        }
};

int main()
{
    Geometry shape;
    int sel;
    cout << "Select Shape (1. Triangle, 2. Square, 3. Circle): ";
    cin >> sel;
    if (sel == 1)
    {
        int l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area: " << shape.calculateTriangleArea(l, b);
    }
    else if (sel == 2)
    {
        int s;
        cout << "Enter Side: ";
        cin >> s;
        cout << "Area : " << shape.calculateSquareArea(s);
    }
    else if (sel == 3)
    {
        int r;
        cout << "Enter Radius: ";
        cin >> r;
        cout << "Area : " << shape.calculateCircleArea(r);
    }
    
}