#include <iostream>
using namespace std;

class Mammals
{
    public:
        void mammal()
        {
            cout << "I am a Mammal \n";
        }
};

class MarineAnimals
{
    public:
        void marine()
        {
            cout << "I am a Marine Animal \n";
        }
};

class BlueWhale: public Mammals, public MarineAnimals
{
    public:
        void both()
        {
            cout << "I belong to both the categories: Mammals as well as Marine Animals \n";
        }
};

int main()
{
    Mammals m;
    MarineAnimals ma;
    BlueWhale bw;
    m.mammal();
    ma.marine();
    bw.both();
    bw.mammal();
    bw.marine();
}