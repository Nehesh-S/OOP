#include <iostream>
using namespace std;

class number
{
    private:
        int no;
    public:
        void getno();
        void parity();
        void prime();
        void factorial();
        void sum();
        void evenodd();
};

void number::getno()
{
    cout << "Enter Number: ";
    cin >> no;
}

void number::parity()
{
    if(no % 2 == 0)
    {
        cout << no << " is Even";
    }
    else
    {
        cout << no << " is Odd";
    }
}

void number::prime()
{
    int i;
    for(i = 2; i < no; i++)
    {
        if(no % i == 0)
        {
            cout << no << " is Composite";
            return;
        }
    }
    cout << no << " is Prime";
    return;
}

void number::factorial()
{
    int i, fact = 1;
    for(i = 1; i <= no; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << no << " is " << fact;
}

void number::sum()
{
    int sum = 0, rem;
    while(no != 0)
    {
        rem = no % 10;
        sum += rem;
        no /= 10;
    }
    cout << "Sum: " << sum;
}

void number::evenodd()
{
    int even = 0, odd = 0, rem;
    while(no != 0)
    {
        rem = no % 10;
        if(rem % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        no /= 10;
    }
    cout << "Even Numbers: " << even;
    cout << "\nOdd Numbers: " << odd;
}

int main()
{
    number n1;
    n1.getno();
    int op;
    cout << "\nAvailable Operations: \n";
    cout << "1. Check Even or Odd \n";
    cout << "2. Check Prime \n";
    cout << "3. Find Factorial \n";
    cout << "4. Sum of all Digits \n";
    cout << "5. Count of even and odd digits \n";

    cout << "Enter Operation: ";
    cin >> op;
    cout << "\n";
    switch(op)
    {
        case 1:
            n1.parity();
            break;
            
        case 2:
            n1.prime();
            break;
            
        case 3:
            n1.factorial();
            break;
            
        case 4:
            n1.sum();
            break;
            
        case 5:
            n1.evenodd();
            break;
        
        default:
            cout << "Invalid Selection";
    }
}