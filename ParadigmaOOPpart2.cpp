#include <iostream>
using namespace std;

class seseorang
{
public:
    virtual void pesan() = 0; //pure virtual function

    // virtual function biasa
    //virtual void pesan()
    // {
    // cout << "pesan dari seseorang" << endl;
    // }
};

class joko : public seseorang
{
public:
    // deklarasi
    void pesan()
    {
        //implementasi
        cout << "Pesan dari joko" << endl;
    }
};



int main()
{
    
}

