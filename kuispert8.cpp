#include <iostream>
using namespace std;

int main() {
    int ca[100];
    int cel, ris;
    int pilih;
    int jumlah;
    bool ketemu = false;

    do {
        cout << "====================================" << endl;
        cout << "      PROGRAM SEQUENTIAL SEARCH     " << endl;
        cout << "        Pencarian Nomor Kendaraan   " << endl;
        cout << "====================================" << endl;
        cout << "1. Input Data Kendaraan" << endl;
        cout << "2. Cari Kendaraan" << endl;
        cout << "3. Keluar" << endl;
        cout << "====================================" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;

        switch (pilih) {

        case 1:
            cout << endl;
            cout << "Masukkan jumlah kendaraan : ";
            cin >> jumlah;

            for (cel = 0; cel < jumlah; cel++) {
                cout << "Input nomor kendaraan ke-" << cel + 1 << " : ";
                cin >> ca[cel];
            }

            cout << "Data kendaraan berhasil disimpan!" << endl;
            cout << endl;
            break;

        case 2:
            cout << endl;
            cout << "Masukkan nomor kendaraan yang dicari : ";
            cin >> ris;

            ketemu = false;

            for (cel = 0; cel < jumlah; cel++) {
                if (ca[cel] == ris) {
                    cout << "Nomor kendaraan ditemukan pada index ke-" 
                         << cel << endl;
                    ketemu = true;
                    break;
                }
            }

            if (!ketemu) {
                cout << "Data kendaraan tidak ditemukan!" << endl;
            }

            cout << endl;
            break;

        case 3:
            cout << endl;
            cout << "Program selesai." << endl;
            break;

        default:
            cout << endl;
            cout << "Menu tidak tersedia!" << endl;
            cout << endl;
        }

    } while (pilih != 3);

    return 0;
}