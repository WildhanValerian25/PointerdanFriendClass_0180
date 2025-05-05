#include <iostream>
#include <string>
using namespace std;

class siswa; // Forward declaration

class orang {
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa; // Syntax diperbaiki: titik dua (:) jadi titik koma (;)
};

class siswa {
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a); // Parameter diubah dari pointer ke reference
};

