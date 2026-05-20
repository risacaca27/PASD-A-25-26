#include <iostream>
using namespace std;

class BubbleSort
{
    private:
        int ca[100];
        int cel;

    public:
        void inputData()
        {
            cout << "================================" << endl;
            cout << "      PROGRAM BUBBLE SORT      " << endl;
            cout << "         ASCENDING ORDER       " << endl;
            cout << "================================" << endl;

            cout << "Masukkan jumlah data : ";
            cin >> cel;

            for(int sa = 0; sa < cel; sa++)
            {
                cout << "Masukkan data ke-" << sa + 1 << " : ";
                cin >> ca[sa];
            }
        }

        void prosesBubble()
        {
            int sa, ris, x;
            int flag = 1;

            sa = 0;

            while(sa <= cel - 2 && flag == 1)
            {
                ris = 0;
                flag = 0;

                while(ris <= cel - 2 - sa)
                {
                    if(ca[ris] > ca[ris + 1])
                    {
                        flag = 1;

                        x = ca[ris];
                        ca[ris] = ca[ris + 1];
                        ca[ris + 1] = x;
                    }

                    ris++;
                }

                sa++;
            }
        }

        void tampilData()
        {
            cout << endl;
            cout << "Hasil Sorting Ascending : " << endl;

            for(int sa = 0; sa < cel; sa++)
            {
                cout << ca[sa] << " ";
            }

            cout << endl;
            cout << "================================" << endl;
            cout << "         TERIMA KASIH          " << endl;
            cout << "================================" << endl;
        }
};

int main()
{
    BubbleSort ris;

    ris.inputData();
    ris.prosesBubble();
    ris.tampilData();

    return 0;
}