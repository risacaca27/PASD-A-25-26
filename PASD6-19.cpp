#include <iostream>
using namespace std;

class MergeSort
{
private:
    int ca[100];
    int sa;

public:
    MergeSort()
    {
        sa = 9;

        ca[0] = 65;
        ca[1] = 2;
        ca[2] = 44;
        ca[3] = 26;
        ca[4] = 19;
        ca[5] = 22;
        ca[6] = 5;
        ca[7] = 3;
        ca[8] = 12;
    }

    void merge(int cel, int tengah, int kanan)
    {
        int sa1 = tengah - cel + 1;
        int sa2 = kanan - tengah;

        int kiri[100];
        int kananArr[100];

        for (int i = 0; i < sa1; i++)
        {
            kiri[i] = ca[cel + i];
        }

        for (int j = 0; j < sa2; j++)
        {
            kananArr[j] = ca[tengah + 1 + j];
        }

        int i = 0;
        int j = 0;
        int k = cel;

        while (i < sa1 && j < sa2)
        {
            if (kiri[i] >= kananArr[j])
            {
                ca[k] = kiri[i];
                i++;
            }
            else
            {
                ca[k] = kananArr[j];
                j++;
            }

            k++;
        }

        while (i < sa1)
        {
            ca[k] = kiri[i];
            i++;
            k++;
        }

        while (j < sa2)
        {
            ca[k] = kananArr[j];
            j++;
            k++;
        }
    }

    void mergeSort(int cel, int kanan)
    {
        if (cel < kanan)
        {
            int tengah = (cel + kanan) / 2;

            mergeSort(cel, tengah);
            mergeSort(tengah + 1, kanan);

            merge(cel, tengah, kanan);
        }
    }

    void tampil()
    {
        cout << "DATA SEBELUM DIURUTKAN :" << endl;
        for (int cel = 0; cel < sa; cel++)
        {
            cout << ca[cel] << " ";
        }

        cout << endl;
        cout << endl;

        mergeSort(0, sa - 1);

        cout << "DATA SETELAH DIURUTKAN DESCENDING :" << endl;

        for (int cel = 0; cel < sa; cel++)
        {
            cout << ca[cel] << " ";
        }

        cout << endl;
    }
};

int main()
{
    MergeSort cel;

    cel.tampil();

    return 0;
}