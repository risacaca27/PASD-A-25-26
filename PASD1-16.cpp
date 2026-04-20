#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int ca;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> ca;
    cin.ignore();

    string nama[20], nim[20];
    int jumlahMK[20];

    string mk[20][20];
    int sks[20][20];
    float quiz[20][20], uts[20][20], uas[20][20];
    float akhir[20][20], ipk[20];
    char huruf[20][20];

    for (int sa = 0; sa < ca; sa++)
    {
        cout << endl;
        cout << "Mahasiswa ke-" << sa + 1 << endl;

        cout << "Nama Mahasiswa        : ";
        getline(cin, nama[sa]);

        cout << "Nomor Induk Mahasiswa : ";
        getline(cin, nim[sa]);

        cout << "Jumlah Mata Kuliah    : ";
        cin >> jumlahMK[sa];
        cin.ignore();

        int totalSKS = 0;
        float totalMutu = 0;

        for (int caa = 0; caa < jumlahMK[sa]; caa++)
        {
            cout << endl;
            cout << "Mata Kuliah ke-" << caa + 1 << endl;

            cout << "Nama Mata Kuliah : ";
            getline(cin, mk[sa][caa]);

            cout << "SKS              : ";
            cin >> sks[sa][caa];

            cout << "Nilai Quiz       : ";
            cin >> quiz[sa][caa];

            cout << "Nilai UTS        : ";
            cin >> uts[sa][caa];

            cout << "Nilai UAS        : ";
            cin >> uas[sa][caa];
            cin.ignore();

            akhir[sa][caa] =
                (quiz[sa][caa] * 0.2) +
                (uts[sa][caa] * 0.3) +
                (uas[sa][caa] * 0.5);

            float bobot;

            if (akhir[sa][caa] >= 85)
            {
                huruf[sa][caa] = 'A';
                bobot = 4;
            }
            else if (akhir[sa][caa] >= 75)
            {
                huruf[sa][caa] = 'B';
                bobot = 3;
            }
            else if (akhir[sa][caa] >= 65)
            {
                huruf[sa][caa] = 'C';
                bobot = 2;
            }
            else if (akhir[sa][caa] >= 50)
            {
                huruf[sa][caa] = 'D';
                bobot = 1;
            }
            else
            {
                huruf[sa][caa] = 'E';
                bobot = 0;
            }

            totalSKS = totalSKS + sks[sa][caa];
            totalMutu = totalMutu + (bobot * sks[sa][caa]);
        }

        ipk[sa] = totalMutu / totalSKS;
    }

    // OUTPUT SEMUA MAHASISWA
    cout << endl;
    cout << "==================== DATA KHS SEMUA MAHASISWA ====================" << endl;

    for (int sa = 0; sa < ca; sa++)
    {
        cout << endl;
        cout << "============================================================" << endl;
        cout << "Nama Mahasiswa        : " << nama[sa] << endl;
        cout << "Nomor Induk Mahasiswa : " << nim[sa] << endl;
        cout << "============================================================" << endl;

        cout << left
             << setw(5) << "No"
             << setw(18) << "Mata Kuliah"
             << setw(6) << "SKS"
             << setw(8) << "Quiz"
             << setw(8) << "UTS"
             << setw(8) << "UAS"
             << setw(10) << "Akhir"
             << setw(8) << "Huruf"
             << endl;

        for (int caa = 0; caa < jumlahMK[sa]; caa++)
        {
            cout << left
                 << setw(5) << caa + 1
                 << setw(18) << mk[sa][caa]
                 << setw(6) << sks[sa][caa]
                 << setw(8) << quiz[sa][caa]
                 << setw(8) << uts[sa][caa]
                 << setw(8) << uas[sa][caa]
                 << setw(10) << akhir[sa][caa]
                 << setw(8) << huruf[sa][caa]
                 << endl;
        }

        cout << "IPK : " << fixed << setprecision(2) << ipk[sa] << endl;
        cout << "============================================================" << endl;
    }

    cin.get();
}