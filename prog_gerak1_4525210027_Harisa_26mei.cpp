#include <iostream>
using namespace std;

int main()
{
    int pil27;
    double v027, vt27, a27, t27;

    cout << "====================================" << endl;
    cout << " PROGRAM GERAK 1 DIMENSI " << endl;
    cout << " NPM : 4525210027 " << endl;
    cout << "====================================" << endl;

    cout << "1. Menghitung Waktu Tempuh" << endl;
    cout << "2. Menghitung Kecepatan Awal" << endl;
    cout << "3. Menghitung Percepatan" << endl;
    cout << "Pilihan : ";
    cin >> pil27;

    switch(pil27)
    {
        case 1:
            cout << endl;
            cout << "Menghitung Waktu Tempuh" << endl;

            cout << "Masukkan Kecepatan Awal (m/s) : ";
            cin >> v027;

            cout << "Masukkan Percepatan (m/s^2) : ";
            cin >> a27;

            cout << "Masukkan Kecepatan Akhir (m/s) : ";
            cin >> vt27;

            t27 = (vt27 - v027) / a27;

            cout << "Waktu Tempuh = " << t27 << " detik" << endl;
            break;

        case 2:
            cout << endl;
            cout << "Menghitung Kecepatan Awal" << endl;

            cout << "Masukkan Kecepatan Akhir (m/s) : ";
            cin >> vt27;

            cout << "Masukkan Percepatan (m/s^2) : ";
            cin >> a27;

            cout << "Masukkan Waktu Tempuh (detik) : ";
            cin >> t27;

            v027 = vt27 - (a27 * t27);

            cout << "Kecepatan Awal = " << v027 << " m/s" << endl;
            break;

        case 3:
            cout << endl;
            cout << "Menghitung Percepatan" << endl;

            cout << "Masukkan Kecepatan Awal (m/s) : ";
            cin >> v027;

            cout << "Masukkan Waktu Tempuh (detik) : ";
            cin >> t27;

            cout << "Masukkan Kecepatan Akhir (m/s) : ";
            cin >> vt27;

            a27 = (vt27 - v027) / t27;

            cout << "Percepatan = " << a27 << " m/s^2" << endl;
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}