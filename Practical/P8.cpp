#include <iostream>
using namespace std;

class Array
{
    int** arr;
    public:
        void allocateArray(int r, int c)
        {
            arr = new int*[r];
            for(int i = 0; i < r; i++)
                arr[i] = new int[c];
        }

        void inputValues(int r, int c)
        {
            cout << "Enter Values:\n";
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                    cin >> arr[i][j];
            }
        }

        void calculateSum(int r, int c)
        {
            int sum = 0;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                    sum += arr[i][j];
            }
            cout << "\nSum of all Values: " << sum << endl;
        }

        void DisplayArray(int r, int c)
        {
            cout << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                    cout << arr[i][j] << "\t";
                cout << endl;
            }
        }

        void delloc(int r)
        {
            for(int i = 0; i < r; i++)
                delete[] arr[i];
            delete[] arr;
        }
};

int main()
{
    int r, c;
    cout << "Enter Number of Rows and columns: ";
    cin >> r >> c;
    Array arr;
    arr.allocateArray(r, c);
    arr.inputValues(r, c);
    arr.DisplayArray(r, c);
    arr.calculateSum(r, c);
    arr.delloc(r);
}