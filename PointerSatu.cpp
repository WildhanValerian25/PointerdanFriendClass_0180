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
    
   