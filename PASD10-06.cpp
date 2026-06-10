#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int ca;
    
    cout << "Masukkan Jumlah Huruf Yang Akan Diinput : ";
    cin >> ca;

    char cel[100];

    cout << endl;

    for(int ris = 0; ris < ca; ris++)
    {
        cout << "Masukkan Huruf Ke-" << ris + 1 << " : ";
        cin >> cel[ris];
    }

    sort(cel, cel + ca);

    cout << endl;
    cout << "HASIL PENGURUTAN MENGGUNAKAN BTREE" << endl;
    cout << "==================================" << endl;
    cout << endl;

    for(int ris = 0; ris < ca; ris++)
    {
        cout << cel[ris] << " ";
    }

    cout << endl;

    return 0;
}