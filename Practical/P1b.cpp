#include <iostream>
#include <string.h>
using namespace std;

#define MAX 5

class book
{
    private:
        char name[10];
        float price;
        int copies;
        char code[10];

    public:
        void getBookDetails();
        void displayBookDetails();
        bool findBook(char qr[]);
};

void book::getBookDetails()
{
    cout << "Enter Book Details: \n";
    cout << "Name: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;
    cout << "Number of Copies: ";
    cin >> copies;
    cout << "Barcode: ";
    cin >> code;
    cout << "Book Details Stored\n";
}

void book::displayBookDetails()
{
    cout << name << "\t" << price << "\t" << copies << "\t" << code << endl;
}

bool book::findBook(char qr[])
{
    if(strcmp(code, qr) == 0)
        return true;
    else
        return false;
}

int main()
{
    book b[MAX];
    int op, i, size = 0;
    char qr[10];
    cout << "\nAvailable Operations: \n";
    cout << "1. Add Book \n";
    cout << "2. Display Books \n";
    cout << "3. Find Book \n";
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
                cout<< "NAME \t" << "PRICE \t" << "COPIES \t" << "CODE \n";
                for(i = 0; i < size; i++)
                {
                    b[i].displayBookDetails();
                }
                break;
                
            case 3:
                cout << "Enter Barcode to Search: ";
                cin >> qr;
                for(i = 0; i < size; i++)
                {
                    if(b[i].findBook(qr) == true)
                    {
                        b[i].displayBookDetails();
                        break;
                    }
                }
                if(i == size)
                    cout << "Book Not Found\n";
                
                break;
                
            case 4:
                return 0;
            
            default:
                cout << "Invalid Selection";
        }
    }
}