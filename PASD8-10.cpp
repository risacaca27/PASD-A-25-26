#include <iostream>
using namespace std;

struct SequentialSearch {
    char ca[10] = {'K','L','M','N','O','P','Q','R','S','T'};
    char cel = 'Q';
    int ris;
};

int main() {
    SequentialSearch data;

    data.ris = -1;

    cout << "********************************" << endl;
    cout << "**      SEQUENTIAL SEARCH    **" << endl;
    cout << "********************************" << endl;
    cout << endl;

    cout << "Isi data nya adalah" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    for(int i = 0; i < 10; i++) {
        cout << "Data [" << i << "] --> " << data.ca[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < 10; i++) {
        if(data.ca[i] == data.cel) {
            data.ris = i;
            break;
        }
    }

    cout << "Huruf yang dicari adalah : " << data.cel << endl;

    if(data.ris != -1) {
        cout << "Data yang dicari ditemukan pada posisi : Data[" 
             << data.ris << "]" << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}