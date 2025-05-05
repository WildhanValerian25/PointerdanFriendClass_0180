#include <iostream>
using namespace std;

class pelajar;

class manusia {
public:
    void showNilaipelajar(pelajar *x);
    void showNilaipelajarDua(pelajar *y);
};

class pelajar {
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend class manusia; //  manusia diizinkan akses private
};

void manusia::showNilaipelajar(pelajar *x) {
    cout << "Nilai pelajar: " << x->nilai << endl; //  akses dengan pointer
}

void manusia::showNilaipelajarDua(pelajar *y) {
    cout << "Nilai pelajar (metode 2): " << y->nilai << endl;
}

int main() {
    manusia budi;
    pelajar pbudi;
    budi.showNilaipelajar(&pbudi);       //  pakai pointer
    budi.showNilaipelajarDua(&pbudi);    //  metode kedua
    return 0;
}
