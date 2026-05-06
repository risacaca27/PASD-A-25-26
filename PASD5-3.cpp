#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string caNama;
    string caNpm;
    float caNilai;
    Node *next;
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(string caNama, string caNpm, float caNilai)
    {
        Node *baru = new Node();

        baru->caNama = caNama;
        baru->caNpm = caNpm;
        baru->caNilai = caNilai;
        baru->next = NULL;

        if (front == NULL)
        {
            front = baru;
            rear = baru;
        }
        else
        {
            rear->next = baru;
            rear = baru;
        }
    }

    void tampil()
    {
        Node *bantu = front;
        int no = 1;

        cout << endl;
        cout << "MENAMPILKAN QUEUE" << endl;
        cout << "===================================" << endl;

        while (bantu != NULL)
        {
            cout << "Elemen ke            : " << no << endl;
            cout << "Nomor Pokok Mahasiswa: " << bantu->caNpm << endl;
            cout << "Nama Mahasiswa       : " << bantu->caNama << endl;
            cout << "Nilai Mahasiswa      : " << bantu->caNilai << endl;
            cout << "===================================" << endl;

            bantu = bantu->next;
            no++;
        }
    }
};

int main()
{
    Queue saQueue;

    int caJumlah;
    string caNama, caNpm;
    float caNilai;

    cout << "Jumlah Data Mahasiswa : ";
    cin >> caJumlah;

    for (int i = 1; i <= caJumlah; i++)
    {
        cout << endl;
        cout << "Data Mahasiswa ke-" << i << endl;

        cout << "Nomor Pokok Mahasiswa : ";
        cin >> caNpm;

        cin.ignore();

        cout << "Nama Mahasiswa        : ";
        getline(cin, caNama);

        cout << "Nilai Mahasiswa       : ";
        cin >> caNilai;

        saQueue.enqueue(caNama, caNpm, caNilai);
    }

    saQueue.tampil();

    return 0;
}