#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void Shownim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswa{1}; //Pointer Objet mhs
    mhs->nim = 2;
    mhs->Shownim();
   
}