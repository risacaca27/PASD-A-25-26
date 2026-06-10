#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int pil27;
    double v027, sudut27;
    double vx27, vy27;
    double tinggi27, jarak27;

    const double g27 = 9.8;
    const double pi27 = 3.14159265359;

    cout << "====================================" << endl;
    cout << " PROGRAM GERAK 2 DIMENSI " << endl;
    cout << " NPM : 4525210027 " << endl;
    cout << "====================================" << endl;

    cout << "Masukkan Kecepatan Awal (m/s) : ";
    cin >> v027;

    cout << "Masukkan Sudut Lempar (derajat) : ";
    cin >> sudut27;

    cout << endl;
    cout << "1. Menghitung Kecepatan Awal Arah X dan Y" << endl;
    cout << "2. Menghitung Tinggi Maksimum" << endl;
    cout << "3. Menghitung Jarak Maksimum" << endl;
    cout << "Pilihan : ";
    cin >> pil27;

    double rad27 = sudut27 * pi27 / 180.0;

    switch(pil27)
    {
        case 1:
            vx27 = v027 * cos(rad27);
            vy27 = v027 * sin(rad27);

            cout << endl;
            cout << "Kecepatan Awal Arah X = " << vx27 << " m/s" << endl;
            cout << "Kecepatan Awal Arah Y = " << vy27 << " m/s" << endl;
            break;

        case 2:
            vy27 = v027 * sin(rad27);

            tinggi27 = (vy27 * vy27) / (2 * g27);

            cout << endl;
            cout << "Tinggi Maksimum = " << tinggi27 << " meter" << endl;
            break;

        case 3:
            jarak27 = (v027 * v027 * sin(2 * rad27)) / g27;

            cout << endl;
            cout << "Jarak Maksimum = " << jarak27 << " meter" << endl;
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}