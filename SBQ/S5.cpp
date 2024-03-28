#include <iostream>
using namespace std;

#define SIZE 10

void sort(int arr[], int len)
{
    int tmp;
    for(int i = 0; i < len-1 ; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int arr[SIZE];
    cout << "Enter 10 Numbers: \n";
    for(int i = 0; i < SIZE; i++)
        cin >> arr[i];

    sort(arr, SIZE);

    cout << "Sorted List: \n";
    for(int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
}