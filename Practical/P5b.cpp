#include <iostream>
using namespace std;

class Age 
{
    int year, month, day;

    int days(int year, int month)
    {
        static const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (month == 2 && chkLeap(year))
            return 29;
        else
            return days[month];
    }

    bool chkLeap(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    public:
        Age(int y, int m, int d) : year(y), month(m), day(d) {}

        Age operator - (Age& tmp)
        {
            Age age(0, 0, 0);
            age.day = day - tmp.day;
            age.month = month - tmp.month;
            age.year = year - tmp.year;

            if (age.day < 0) {
                age.month--;
                int prevMon = days(tmp.year, tmp.month);
                age.day += prevMon;
            }
            if (age.month < 0) {
                age.year--;
                age.month += 12;
            }

            return age;
        }

        void show()
        {
            cout << "Current age: " << year << " years " << month << " months " << day << " days\n";
        }
};

int main() {
    int dobYear, dobMonth, dobDay;
    int currentYear, currentMonth, currentDay;

    cout << "Enter Date of Birth (DD MM YYYY): ";
    cin >> dobDay >> dobMonth >> dobYear;

    cout << "Enter Current Date (DD MM YYYY): ";
    cin >> currentDay >> currentMonth >> currentYear;

    Age dob(dobYear, dobMonth, dobDay);
    Age currentDate(currentYear, currentMonth, currentDay);

    Age age = currentDate - dob;
    age.show();
}
