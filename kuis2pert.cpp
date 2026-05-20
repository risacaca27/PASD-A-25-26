#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string ca;   
    string cel;  
    int ris;     
};

int main() {

    Barang data[100];

    int jumlah, pilih;
    int loop;
    int banding;
    string cari;
    bool ketemu = false;

    do {

        cout << "======================================" << endl;
        cout << "     PROGRAM SEQUENTIAL SEARCH        " << endl;
        cout << "          DATA TOKO ELEKTRONIK        " << endl;
        cout << "======================================" << endl;
        cout << "1. Input Data Barang" << endl;
        cout << "2. Cari Barang" << endl;
        cout << "3. Keluar" << endl;
        cout << "======================================" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;

        switch(pilih) {

        case 1:

            cout << endl;
            cout << "Masukkan jumlah barang : ";
            cin >> jumlah;

            for(loop = 0; loop < jumlah; loop++) {

                cout << endl;
                cout << "Data barang ke-" << loop + 1 << endl;

                cout << "Kode Barang : ";
                cin >> data[loop].ca;

                cin.ignore();

                cout << "Nama Barang : ";
                getline(cin, data[loop].cel);

                cout << "Stok Barang : ";
                cin >> data[loop].ris;
            }

            cout << endl;
            cout << "Data barang berhasil disimpan!" << endl;
            cout << endl;

            break;

        case 2:

            if(jumlah == 0) {
                cout << endl;
                cout << "Data barang masih kosong!" << endl;
                cout << endl;
                break;
            }

            cout << endl;
            cout << "Masukkan kode barang yang dicari : ";
            cin >> cari;

            ketemu = false;
            banding = 0;

            for(loop = 0; loop < jumlah; loop++) {

                banding++;

                if(data[loop].ca == cari) {

                    cout << endl;
                    cout << "Barang ditemukan!" << endl;
                    cout << "Kode Barang : " << data[loop].ca << endl;
                    cout << "Nama Barang : " << data[loop].cel << endl;
                    cout << "Stok Barang : " << data[loop].ris << endl;

                    ketemu = true;
                    break;
                }
            }

            if(ketemu == false) {
                cout << endl;
                cout << "Barang tidak ditemukan!" << endl;
            }

            cout << "Jumlah perbandingan : " << banding << endl;
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

    } while(pilih != 3);

    return 0;
}