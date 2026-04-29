#include <iostream>
using namespace std;

#define MAX 20

string cel[MAX] = {"Maemo", "Symbian", "Mac", "Windows", "Iphone"};
int ca = 5;

// tampil
void tampil() {
    cout << "Isi Antrian: ";
    for(int i = 0; i < ca; i++) {
        cout << cel[i] << " ";
    }
    cout << endl;
}

// cari posisi data
int cari(string data) {
    for(int i = 0; i < ca; i++) {
        if(cel[i] == data) {
            return i;
        }
    }
    return -1;
}

// tambah di posisi
void tambahPosisi(string data, int posisi) {
    for(int i = ca; i > posisi; i--) {
        cel[i] = cel[i - 1];
    }
    cel[posisi] = data;
    ca++;
}

// hapus semua
void hapusSemua() {
    ca = 0;
}

int main() {

    cout << "DATA AWAL" << endl;
    tampil();

    // a. Iphone 5 di atas Iphone
    tambahPosisi("Iphone 5", cari("Iphone"));
    cout << "A. Iphone 5 di atas Iphone" << endl;
    tampil();

    // b. Windows Phone di atas Windows
    tambahPosisi("Windows Phone", cari("Windows"));
    cout << "B. Windows Phone di atas Windows" << endl;
    tampil();

    // c. SnowLeopard setelah Mac
    tambahPosisi("SnowLeopard", cari("Mac") + 1);
    cout << "C. SnowLeopard setelah Mac" << endl;
    tampil();

    // d. Symbian Belle setelah Symbian
    tambahPosisi("Symbian Belle", cari("Symbian") + 1);
    cout << "D. Symbian Belle setelah Symbian" << endl;
    tampil();

    // e. Maemo 4 paling bawah lalu hapus semua
    tambahPosisi("Maemo 4", ca);
    cout << "E. Tambah Maemo 4 di bawah" << endl;
    tampil();

    hapusSemua();
    cout << "Setelah dihapus semua:" << endl;
    tampil();

    return 0;
}