#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void shownim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main (){

    mahasiswa mhs; //Object mhs
    mhs.nim = 5;
    mhs.shownim(); //Member Access Operator
    
    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.shownim();

    mahasiswa *pMhs = &mhs; //Pointer Deference pMhs
    pMhs->nim = 3; // Arrow Operator
    pMhs->shownim();
    return 0;


}