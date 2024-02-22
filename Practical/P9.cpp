#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    ofstream even, odd;
    even.open("d:/Nehesh_48/OOP/Practical/Result/P9_even.txt");
    odd.open("d:/Nehesh_48/OOP/Practical/Result/P9_odd.txt");

    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
            even << i << " ";
        else
            odd << i << " ";
    }

    even.close();
    odd.close();

    int data;
    ifstream e, o;
    e.open("d:/Nehesh_48/OOP/Practical/Result/P9_even.txt");
    o.open("d:/Nehesh_48/OOP/Practical/Result/P9_odd.txt");
    cout << "Contents of Even.txt :\n";
    while(e)
    {
        e >> data;
        cout << data << " ";
    }
    cout << "Contents of Odd.txt :\n";
    while(o)
    {
        o >> data;
        cout << data << " ";
    }

    e.close();
    o.close();
}