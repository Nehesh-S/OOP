#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream even, odd;
    even.open("d:/Nehesh_48/OOP/Practical/Result/P9_even.txt", ios::in | ios::out);
    odd.open("d:/Nehesh_48/OOP/Practical/Result/P9_odd.txt", ios::in | ios::out);

    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
            even << i << " ";
        else
            odd << i << " ";
    }

    int data;
    even.seekg(0, ios::beg);
    odd.seekg(0, ios::beg);

    cout << "Contents of Even.txt :\n";
    while(even)
    {
        even >> data;
        cout << data << " ";
    }
    cout << "\nContents of Odd.txt :\n";
    while(odd)
    {
        odd >> data;
        cout << data << " ";
    }

    even.close();
    odd.close();
}