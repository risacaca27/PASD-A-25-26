#include <iostream>
using namespace std;

class SequentialSearch {
private:
    char ca[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char cel = 'F';
    int ris = -1;

public:
    void tampilData() {
        cout << "********************************" << endl;
        cout << "**      SEQUENTIAL SEARCH    **" << endl;
        cout << "********************************" << endl;
        cout << endl;

        cout << "Isi data nya adalah" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~" << endl;
        cout << endl;

        for(int i = 0; i < 10; i++) {
            cout << "Data [" << i << "] --> " << ca[i] << endl;
        }

        cout << endl;
    }

    void cariData() {
        for(int i = 0; i < 10; i++) {
            if(ca[i] == cel) {
                ris = i;
                break;
            }
        }

        cout << "Huruf yang dicari adalah : " << cel << endl;

        if(ris != -1) {
            cout << "Data yang dicari ditemukan pada posisi : Data[" 
                 << ris << "]" << endl;
        } else {
            cout << "Data tidak ditemukan" << endl;
        }
    }
};

int main() {
    SequentialSearch ris;

    ris.tampilData();
    ris.cariData();

    return 0;
}