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

