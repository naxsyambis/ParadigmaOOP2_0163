#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void pernkenalan()
    {
        cout << "Halo saya Functioan dari base class";
    }
};

class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Halo saya Function dari derived Class";
    }
};

int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}

