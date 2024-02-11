#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;
    public:

        void getTime()
        {
            cout << "Enter the time (Hour, Minute, Second): ";
            cin >> hour >> min >> sec;
            
            if(min >= 60 || sec >= 60 || hour >= 24)
            {
                cout << "Invalid Time\n";
                getTime();
            }
        }

        void showTime()
        {
            cout << "Time: " << hour << ":" << min << ":" << sec;
        }

        Time operator + (Time &t)
        {
            Time tmp;
            tmp.hour = this->hour + t.hour;
            tmp.min = this->min + t.min;
            tmp.sec = this->sec + t.sec;
            if(tmp.sec >= 60)
            {
                tmp.min++;
                tmp.sec %= 60;
            }
            if(tmp.min >= 60)
            {
                tmp.hour++;
                tmp.min %= 60;
            }
            if(tmp.hour >= 24)
                tmp.hour = 0;

            return tmp;
        }
};

int main()
{
    Time t1, t2, t3;
    t1.getTime();
    t2.getTime();
    t3 = t1 + t2;
    t3.showTime();
}
