#include <iostream>
using namespace std;

void HEAP(int CanArray[], int n, int i) {
    int terkecil = i;
    int kiri = 2 * i + 1;
    int kanan = 2 * i + 2;

    if (kiri < n && CanArray[kiri] < CanArray[terkecil])
        terkecil = kiri;

    if (kanan < n && CanArray[kanan] < CanArray[terkecil])
        terkecil = kanan;

    if (terkecil != i) {
        swap(CanArray[i], CanArray[terkecil]);
        HEAP(CanArray, n, terkecil);
    }
}

void heapSort(int CanArray[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        HEAP(CanArray, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(CanArray[0], CanArray[i]);
        HEAP(CanArray, i, 0);
    }
}

int main() {
    int ris[8];

    cout << "Masukkan 8 data: ";
    for (int i = 0; i < 8; i++) {
        cin >> ris[i];
    }

    cout << endl;
    cout << "Menampilkan Data Sebelum Diurutkan" << endl;
    cout << "==================================" << endl;

    for (int i = 0; i < 8; i++) {
        cout << ris[i] << " ";
    }

    heapSort(ris, 8);

    cout << endl << endl;
    cout << "Menampilkan Data Setelah Diurutkan - HEAP SORT" << endl;
    cout << "==============================================" << endl;

    for (int i = 0; i < 8; i++) {
        cout << ris[i] << " ";
    }

    cout << endl;

    return 0;
}