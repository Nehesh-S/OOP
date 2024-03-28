#include <iostream>
using namespace std;

#define MAX 5

class book
{
    public:
        string name;
        float price;
        int volume;
        void getBookDetails();
        void displayBookDetails();
};

void book::getBookDetails()
{
    cout << "Enter Book Details: \n";
    cout << "Name: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;
    cout << "Volume: ";
    cin >> volume;
    cout << "Book Details Stored\n";
}

void book::displayBookDetails()
{
    cout << name << "\t" << price << "\t" << volume << endl;
}

int main()
{
    book b[MAX];
    int op, i, size = 0;
    char qr[10];
    cout << "\nAvailable Operations: \n";
    cout << "1. Add Book \n";
    cout << "2. Display Books \n";
    cout << "3. Display Volume \n";
    cout << "4. Exit \n";

    while(true)
    {
        cout << "\nEnter Operation: ";
        cin >> op;
        cout << endl;
        switch(op)
        {
            case 1:
                if(size == MAX)
                {
                    cout << "Storage Full";
                    break;
                }
                b[size].getBookDetails();
                size++;
                break;
                
            case 2:
                cout<< "NAME \t" << "PRICE \t" << "VOLUME \n";
                for(i = 0; i < size; i++)
                    b[i].displayBookDetails();
                
                break;
                
            case 3:
                int vol;
                for(i = 0; i < size; i++)
                    vol += b[i].volume;
                cout << "Total Volume: " << vol << endl;
                break;
                
            case 4:
                return 0;
            
            default:
                cout << "Invalid Selection";
        }
    }
}