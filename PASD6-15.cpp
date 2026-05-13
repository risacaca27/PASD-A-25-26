#include <iostream>
using namespace std;

struct Data
{
    int ca[100];
    int sa;
};

void quickSortAsc(int ca[], int sa, int cel)
{
    int kiri = sa;
    int kanan = cel;
    int tengah = ca[(sa + cel) / 2];

    while (kiri <= kanan)
    {
        while (ca[kiri] < tengah)
        {
            kiri++;
        }

        while (ca[kanan] > tengah)
        {
            kanan--;
        }

        if (kiri <= kanan)
        {
            int celTemp = ca[kiri];
            ca[kiri] = ca[kanan];
            ca[kanan] = celTemp;

            kiri++;
            kanan--;
        }
    }

    if (sa < kanan)
    {
        quickSortAsc(ca, sa, kanan);
    }

    if (kiri < cel)
    {
        quickSortAsc(ca, kiri, cel);
    }
}

void quickSortDesc(int ca[], int sa, int cel)
{
    int kiri = sa;
    int kanan = cel;
    int tengah = ca[(sa + cel) / 2];

    while (kiri <= kanan)
    {
        while (ca[kiri] > tengah)
        {
            kiri++;
        }

        while (ca[kanan] < tengah)
        {
            kanan--;
        }

        if (kiri <= kanan)
        {
            int celTemp = ca[kiri];
            ca[kiri] = ca[kanan];
            ca[kanan] = celTemp;

            kiri++;
            kanan--;
        }
    }

    if (sa < kanan)
    {
        quickSortDesc(ca, sa, kanan);
    }

    if (kiri < cel)
    {
        quickSortDesc(ca, kiri, cel);
    }
}

void tampil(int ca[], int sa)
{
    for (int cel = 0; cel < sa; cel++)
    {
        cout << ca[cel] << " ";
    }
    cout << endl;
}

int main()
{
    Data cel;

    cel.sa = 9;

    cel.ca[0] = 65;
    cel.ca[1] = 2;
    cel.ca[2] = 44;
    cel.ca[3] = 26;
    cel.ca[4] = 19;
    cel.ca[5] = 22;
    cel.ca[6] = 5;
    cel.ca[7] = 3;
    cel.ca[8] = 12;

    int sa;

    do
    {
        cout << "===== MENU QUICK SORT =====" << endl;
        cout << "1. Ascending" << endl;
        cout << "2. Descending" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih Menu : ";
        cin >> sa;

        if (sa == 1)
        {
            quickSortAsc(cel.ca, 0, cel.sa - 1);

            cout << endl;
            cout << "Data Setelah Diurutkan Ascending :" << endl;
            tampil(cel.ca, cel.sa);
            cout << endl;
        }
        else if (sa == 2)
        {
            quickSortDesc(cel.ca, 0, cel.sa - 1);

            cout << endl;
            cout << "Data Setelah Diurutkan Descending :" << endl;
            tampil(cel.ca, cel.sa);
            cout << endl;
        }
        else if (sa == 3)
        {
            cout << endl;
            cout << "Program Selesai." << endl;
        }
        else
        {
            cout << endl;
            cout << "Pilihan Tidak Ada!" << endl;
            cout << endl;
        }

    } while (sa != 3);

    return 0;
}