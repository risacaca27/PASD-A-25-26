#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int ca;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> ca;
    cin.ignore();

    for (int sa = 1; sa <= ca; sa++)
    {
        string nama, nim;
        int jumlahMK;

        cout << endl;
        cout << "==========================================" << endl;
        cout << "Data Mahasiswa ke-" << sa << endl;
        cout << "Nama Mahasiswa        : ";
        getline(cin, nama);

        cout << "Nomor Induk Mahasiswa : ";
        getline(cin, nim);

        cout << "Jumlah Mata Kuliah    : ";
        cin >> jumlahMK;
        cin.ignore();

        string caMK[20];
        char saNilai[20];
        int caSKS[20];
        float saAngka[20];

        int totalSKS = 0;
        float totalNilai = 0;

        for (int ca = 0; ca < jumlahMK; ca++)
        {
            cout << endl;
            cout << "Mata kuliah ke-" << ca + 1 << endl;
            cout << "Nama Mata Kuliah : ";
            getline(cin, caMK[ca]);

            cout << "SKS              : ";
            cin >> caSKS[ca];

            cout << "Nilai Huruf      : ";
            cin >> saNilai[ca];
            cin.ignore();

            if (saNilai[ca] == 'A' || saNilai[ca] == 'a')
                saAngka[ca] = 4.0;
            else if (saNilai[ca] == 'B' || saNilai[ca] == 'b')
                saAngka[ca] = 3.0;
            else if (saNilai[ca] == 'C' || saNilai[ca] == 'c')
                saAngka[ca] = 2.0;
            else if (saNilai[ca] == 'D' || saNilai[ca] == 'd')
                saAngka[ca] = 1.0;
            else
                saAngka[ca] = 0.0;

            totalSKS = totalSKS + caSKS[ca];
            totalNilai = totalNilai + (saAngka[ca] * caSKS[ca]);
        }

        float ipk = totalNilai / totalSKS;

        cout << endl;
        cout << "============================================================" << endl;
        cout << "                 KARTU HASIL STUDI [KHS]" << endl;
        cout << "============================================================" << endl;
        cout << "Nama Mahasiswa         : " << nama << endl;
        cout << "Nomor Induk Mahasiswa  : " << nim << endl;
        cout << "------------------------------------------------------------" << endl;

        cout << left << setw(5) << "No"
             << setw(20) << "Mata Kuliah"
             << setw(8) << "SKS"
             << setw(15) << "Nilai Huruf"
             << setw(12) << "Nilai Angka" << endl;

        cout << "------------------------------------------------------------" << endl;

        for (int sa = 0; sa < jumlahMK; sa++)
        {
            cout << left << setw(5) << sa + 1
                 << setw(20) << caMK[sa]
                 << setw(8) << caSKS[sa]
                 << setw(15) << saNilai[sa]
                 << setw(12) << saAngka[sa] << endl;
        }

        cout << "------------------------------------------------------------" << endl;
        cout << "Jumlah Mata Kuliah Yang Diambil : " << jumlahMK << endl;
        cout << "Jumlah SKS                      : " << totalSKS << endl;
        cout << "Indeks Prestasi Kumulatif [IPK] : " << fixed << setprecision(2) << ipk << endl;
        cout << "============================================================" << endl;
    }

    cin.get();
}