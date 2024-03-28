#include <iostream>
using namespace std;

float calculateElectricityBill(int unit)
{
    float rate = 0;
    while (unit != 0)
    {
        if (unit < 100)
            rate += 0.5;
        else if (unit < 200)
            rate += 0.75;
        else
            rate += 1.2;

        unit --;
    }
    return rate;
}

int main()
{
    int unit;
    cout << "Enter Units Used in kWh: ";
    cin >> unit;
    int bill = calculateElectricityBill(unit);
    cout << "Electricity Bill: $" << bill;
}
