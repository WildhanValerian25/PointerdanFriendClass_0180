#include <iostream>
using namespace std;

class Dosen{
    public: 
    string nama;
    void tampilNama(){
        cout << "Namanya adalah " << nama << endl
    }
};
class Staf{
    public:
    int nidn;
};
int main (){
    Dosen ds;
    ds.nama = "Giga";
    ds.tampilNama();

    


    