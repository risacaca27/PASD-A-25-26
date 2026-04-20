#include <iostream>
#include <iomanip>
using namespace std;

class Mahasiswa {
private:
    string saNim, saNama;
    float caQuiz, caUTS, caUAS, caNA;
    string saIndex;

public:
    void inputData(int i) {
        cout << "Pengisian Data Mahasiswa Ke-" << i << endl;
        cout << "NIM        : "; cin >> saNim;
        cout << "Nama       : "; cin >> saNama;
        cout << "Nilai QUIZ : "; cin >> caQuiz;
        cout << "Nilai UTS  : "; cin >> caUTS;
        cout << "Nilai UAS  : "; cin >> caUAS;
        cout << endl;
    }

    void hitungNA() {
        caNA = (caQuiz + caUTS + caUAS) / 3;
    }

    void tentukanIndex() {
        if (caNA <= 44.99)
            saIndex = "E";
        else if (caNA <= 55.99)
            saIndex = "D";
        else if (caNA <= 59.99)
            saIndex = "C";
        else if (caNA <= 63.99)
            saIndex = "C+";
        else if (caNA <= 67.99)
            saIndex = "B-";
        else if (caNA <= 71.99)
            saIndex = "B";
        else if (caNA <= 75.99)
            saIndex = "B+";
        else if (caNA <= 79.99)
            saIndex = "A-";
        else
            saIndex = "A";
    }

    void tampilData() {
        cout << setw(10) << saNim
             << setw(15) << saNama
             << setw(8) << caQuiz
             << setw(8) << caUTS
             << setw(8) << caUAS
             << setw(10) << fixed << setprecision(2) << caNA
             << setw(8) << saIndex << endl;
    }
};

int main() {
    int caJumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> caJumlah;
    cout << endl;

    Mahasiswa mhs[100];

    for (int i = 0; i < caJumlah; i++) {
        mhs[i].inputData(i + 1);
        mhs[i].hitungNA();
        mhs[i].tentukanIndex();
    }

    cout << "Data yang telah dimasukkan adalah :" << endl;
    cout << "====================================================================" << endl;
    cout << setw(10) << "NIM"
         << setw(15) << "NAMA"
         << setw(8) << "QUIS"
         << setw(8) << "UTS"
         << setw(8) << "UAS"
         << setw(10) << "NA"
         << setw(8) << "INDEX" << endl;
    cout << "====================================================================" << endl;

    for (int i = 0; i < caJumlah; i++) {
        mhs[i].tampilData();
    }

    cout << "====================================================================" << endl;

    return 0;
}