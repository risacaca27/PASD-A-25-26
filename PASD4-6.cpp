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

// cari posisi
int cari(string data) {
    for(int i = 0; i < ca; i++) {
        if(cel[i] == data) {
            return i;
        }
    }
    return -1;
}

// hapus data
void hapusData(string data) {
    int pos = cari(data);
    if(pos != -1) {
        for(int i = pos; i < ca - 1; i++) {
            cel[i] = cel[i + 1];
        }
        ca--;
    }
}

// tambah posisi
void tambahPosisi(string data, int posisi) {
    for(int i = ca; i > posisi; i--) {
        cel[i] = cel[i - 1];
    }
    cel[posisi] = data;
    ca++;
}

int main() {

    cout << "DATA AWAL" << endl;
    tampil();

    // a. Maemo 4 paling bawah, hapus Mac
    tambahPosisi("Maemo 4", ca);
    hapusData("Mac");
    cout << "A." << endl;
    tampil();

    // b. Windows Mobile dibawah Windows, hapus Iphone
    tambahPosisi("Windows Mobile", cari("Windows") + 1);
    hapusData("Iphone");
    cout << "B." << endl;
    tampil();

    // c. Java Midlet dibawah Symbian, hapus Maemo
    tambahPosisi("Java Midlet", cari("Symbian") + 1);
    hapusData("Maemo");
    cout << "C." << endl;
    tampil();

    // d. Lion OS X dibawah Mac, hapus Maemo
    tambahPosisi("Lion OS X", cari("Mac") + 1);
    hapusData("Maemo");
    cout << "D." << endl;
    tampil();

    // e. Android dibawah Iphone, hapus Maemo
    tambahPosisi("Android", cari("Iphone") + 1);
    hapusData("Maemo");
    cout << "E." << endl;
    tampil();

    return 0;
}