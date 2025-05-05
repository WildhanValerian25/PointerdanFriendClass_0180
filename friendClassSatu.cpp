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

// Implementasi method class orang
void orang::setNama(string pNama) { // Perbaiki 'strung' jadi 'string'
    nama = pNama;
}

// Implementasi method class siswa
void siswa::setId(int pId) {
    id = pId;
}

void siswa::displayAll(orang &a) { // Perbaiki parameter dan akses nama
    cout << "ID: " << id << endl;
    cout << "Nama: " << a.nama << endl;
}

int main() {
    orang joko;
    joko.setNama("Joko Susilo");

    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);

    return 0;
}
